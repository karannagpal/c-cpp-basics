#include<stdio.h>

int main()
{
    /*
    this program takes a number 'n' as input
    and finds sum of natural numbers till 'n'
    */

    float n, sum;
    //both variables should be in float

    printf("Enter value of 'n': ");
    scanf("%f", &n);

    sum = (n / 2) * (n + 1);

    printf("\nSum = %0.0f \n", sum);

    return 0;
}
