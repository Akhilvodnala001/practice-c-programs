#include <stdio.h>
#define state(num,pos) ((num >> pos) & 1)

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int n = num;
    int flag = 1;

    while ((n >> 1) > 0) 
    {
        int bit1 = state(n, 0);
        int bit2 = state(n, 1);

        if ((bit1 ^ bit2) == 0)
        {
            flag = 0;
            break;
        }
        n = n >> 1;
    }

    if (flag)
        printf("Alternate bits are SET!\n");
    else
        printf("Alternate bits are not SET!\n");
}

