#include<stdio.h>

int main()
{
    int i, n, max, sec_max;
    printf("Enter number of values: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter values:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Step 1 - initializing values of max and sec_max
    if (arr[0] > arr[1])
    {
        max = arr[0];
        sec_max = arr[1];
    }
    else
    {
        sec_max = arr[0];
        max = arr[1];
    }

    // Step 2 - Checking other elements
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            sec_max = max;
            max = arr[i];
        }
        else if (arr[i] > sec_max)
        {
            sec_max = arr[i];
        }
    }

    printf("Second largest: %d", sec_max);

    return 0;
}
