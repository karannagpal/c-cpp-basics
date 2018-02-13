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

    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] != max)
        {
            sec_max = arr[i];
            break;
        }
    }

    while(i < n)
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
        i++;
    }

    printf("Second largest: %d", sec_max);

    return 0;
}
