#include<stdio.h>

int main()
{
    int a, b, c, d, max;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;
    if(d > max)
        max = d;

    printf("max: %d", max);

    return 0;
}

/*
the above program
makes 3 comparisons
and uses one extra variable
and it does not changes
the original variables
*/

