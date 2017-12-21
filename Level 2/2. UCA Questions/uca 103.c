#include<stdio.h>

int main()
{
    int n, min = 10, x;
    scanf("%d", &n);

    while(n != 0)
    {
        x = n % 10;
        n = n / 10;

        if(x == 0)
        {
            continue;
        }
        else if (min > x)
        {
            min = x;
        }
    }

    printf("%d", min);

    return 0;
}
