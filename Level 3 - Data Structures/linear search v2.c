#include<stdio.h>
#include<math.h>

int main()
{
    /*
    Performing linear search on array
    n = number of elements
    i = iterator
    x = value to be searched
    counter = counts occurrences
    */
    int n;
    printf("Enter number of elements (max 20): ");
    scanf("%d", &n);

    int arr[20];
    int i;
    int x;
    int counter = 0;

    printf("\n Enter elements of array: \n");
    for(i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n Enter value to be searched: ");
    scanf("%d", &x);

    // searching starts here
    for(i = 0; i < n; i++)
    {
        if(x == arr[i])
        {
            counter++;
        }
    }

    if(counter != 0)
    {
        printf("\n %d was found, %d times. \n", x, counter);
    }
    else
    {
        printf("\n %d not found. \n", x);
    }

    return 0;
}
