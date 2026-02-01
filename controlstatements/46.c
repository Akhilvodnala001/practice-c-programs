#include <stdio.h>
int main()
{
    int n;
    printf("No. of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int i, j;

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int freq[n];  // to store frequency of each element
    for (i = 0; i < n; i++)
    {
        freq[i] = -1; // initialize as unvisited
    }

    for (i = 0; i < n; i++)
    {
        int count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0; // mark as visited
            }
        }

        if (freq[i] != 0)  // if not visited
        {
            freq[i] = count;
        }
    }

    printf("\nFrequency of elements:\n");
    for (i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
s
