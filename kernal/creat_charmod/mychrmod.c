#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/uaccess.h>

static int dev_open(struct inode *inode, struct file *file);
static int dev_close(struct inode *inode, struct file *file);
static ssize_t dev_read(struct file *file,char __user *buf,size_t count,loff_t *offset);
static ssize_t dev_write(struct file *file,const char __user *buf,size_t count,loff_t *offset);

typedef struct
{
  char buffer[512];
  int numofbytes;
  struct cdev mycdev;
}mydev_t;

mydev_t mydevcon;

struct file_operations fops = 
{
  .owner = THIS_MODULE,
  .open = dev_open,
  .release = dev_close,
  .read = dev_read,
  .write = dev_write,
};

#define MAJOR_NUM 42
#define MINOR_NUM 0
#define DEV_NUMS 1
#define DRV_NAME "mychrmod"

static int __init init_fun(void)
{
	dev_t devno;
	devno = MKDEV(MAJOR_NUM,MINOR_NUM);
	int ret;
	ret = register_chrdev_region(devno,1,DRV_NAME);
	if (ret<0)
	{
		printk("Error registering file!!");
		return ret;
	}
	cdev_init(&mydevcon.mycdev,&fops);
	cdev_add(&mydevcon.mycdev,devno,1);
	printk("Registered succesfully!!\n");
	return 0;
}
static void __exit exit_fun(void)
{
	dev_t devno;
	devno = MKDEV(MAJOR_NUM,MINOR_NUM);
	unregister_chrdev_region(devno,1);
	cdev_del(&mydevcon.mycdev);
	printk("Removed succesfully!!\n"); 
}
static int dev_open(struct inode *inode, struct file *file)
{
  file->private_data = &mydevcon;
  printk("Module opened succesfully!!");
  return 0;
}
static int dev_close(struct inode *inode, struct file *file)
{
  printk("Module closed succesfully!!");
  return 0;
}
static ssize_t dev_read(struct file *file,char __user *buf,size_t count,loff_t *offset)
{
  mydev_t *temp = file->private_data;
  copy_to_user(buf,temp->buffer,count);
  temp->numofbytes = 0;
  return count;
}
static ssize_t dev_write(struct file *file,const char __user *buf,size_t count,loff_t *offset)
{
  mydev_t *temp = file->private_data;
  copy_from_user(temp->buffer,buf,count);
  temp->numofbytes = count;
  return count;
}
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Akhil");
module_init(init_fun);
module_exit(exit_fun);
