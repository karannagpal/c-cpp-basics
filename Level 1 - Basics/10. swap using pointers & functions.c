/*
this program sorts 2 numbers
using pointers and functions.
The swap function is given
memory address of the 2 numbers
and the content of
those 2 memory locations is swapped
*/

#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 45;
    int y = 12;
    printf("Before swap operation: %d %d\n", x, y);

    if (x > y)
    {
        swap(&x, &y);
    }

    printf("After swap operation: %d, %d\n", x, y);

    return 0;
}
