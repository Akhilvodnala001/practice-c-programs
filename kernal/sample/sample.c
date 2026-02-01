#include <linux/kernel.h>
#include <linux/module.h>
static int __init init_function(void) 
{
	printk("Kernel Loaded Succesfully!!\n");
	return 0;
}
static void __exit  exit_function(void)
{
	printk("Kernel removed succesfully!!!\n");
	return;
}
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Akhil");
module_init(init_function);
module_exit(exit_function);
