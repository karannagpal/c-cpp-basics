#include<stdio.h>
void main()
{
    /*
    swapping two numbers using temp
    numbers are entered by users
    */
    int a, b, temp;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("Value of a and b after swapping: %d and %d", a, b);
}
