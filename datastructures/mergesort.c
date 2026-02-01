#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(int n)
{
    struct node *newnode;

    if (n == 0)
        return NULL;

    newnode = malloc(sizeof(struct node));
    if (!newnode)
        return NULL;

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = create(n - 1);
    return newnode;
}

void display(struct node *start)
{
    while (start != NULL)
    {
        printf("%d ", start->data);
        start = start->next;
    }
}

struct node *merge_sorted_lists(struct node *l1, struct node *l2)
{
    struct node dummy;          // no heap allocation
    struct node *tail = &dummy;

    dummy.next = NULL;

    while (l1 && l2)
    {
        if (l1->data < l2->data)
        {
            tail->next = l1;
            l1 = l1->next;
        }
        else
        {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    tail->next = (l1 != NULL) ? l1 : l2;
    return dummy.next;
}

int main()
{
    int n;
    struct node *list1, *list2, *mergedlist;

    printf("No.of elements in each linked list: ");
    scanf("%d", &n);

    printf("Enter sorted data for list-1:\n");
    list1 = create(n);

    printf("Enter sorted data for list-2:\n");
    list2 = create(n);

    mergedlist = merge_sorted_lists(list1, list2);

    printf("Merged list:\n");
    display(mergedlist);

    return 0;
}

