#include<stdio.h>

int main()
{
    /*
    this program takes radius of circle as input
    and prints circumference and area
    */

    float pi, c, r, a;
    pi = 3.1416;

    printf("Enter radius: ");
    scanf("%f", &r);

    a = pi * r * r;
    c = 2 * pi * r;

    printf("Area = %0.2f\n", a);
    printf("Circumference = %0.2f\n", c);

    return 0;
}
