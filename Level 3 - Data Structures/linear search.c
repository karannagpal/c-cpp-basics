#include<stdio.h>
#include<math.h>

int main()
{
    /*
    Simplest linear search
    Performing linear search on array
    array size to fixed to 10
    i = iterator
    x = value to be searched
    */
    int arr[10];
    int i, x, flag;

    printf("Enter elements of array: \n");
    for(i = 0; i < 10; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n Enter value to be searched: ");
    scanf("%d", &x);

    // searching starts here
    for(i = 0; i < 10; i++)
    {
        if(x == arr[i])
        {
            flag++;
            break;
        }
    }

    if(flag == 0)
    {
        printf("\n Not found");
    }
    else
    {
        printf("\n Yes, Found");
    }

    return 0;
}
