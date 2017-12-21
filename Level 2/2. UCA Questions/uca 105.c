#include<stdio.h>

int main()
{
    int i, j, k, n = 6;
    //scanf("%d", &n);

    for(i = n; i > 0; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        for(k = -1; k <= 2*(n-i)-1; k++)
        {
            if(k > 0)
            {
                printf("  ");
            }
        }

        for(j = i; j > 0; j--)
        {
            if(j == n)
            {
                continue;
            }
            else
            {
                printf("%d ", j);
            }
        }

        printf("\n");
    }
    return 0;
}
