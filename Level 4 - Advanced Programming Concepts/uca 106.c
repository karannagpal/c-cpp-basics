#include<stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(b > a)
        a = b;
    if(c > a)
        a = c;
    if(d > a)
        a = d;

    printf("max: %d", a);

    return 0;
}

/*
the above program
makes 3 comparisons
and uses no extra variables
but it changes original variables
*/
