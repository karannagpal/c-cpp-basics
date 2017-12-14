#include<stdio.h>
#include<math.h>

int main()
{
    /*
    this program takes 3 sides as input
    and finds area of triangle
    using heron's formula
    */

    int a, b, c;
    float s, area;

    printf("Enter 3 sides \n");
    scanf("%d %d %d", &a, &b, &c);

    s = (a + b + c)/2;
    area = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("Area of triangle = %0.2f \n", area);

    return 0;
}
