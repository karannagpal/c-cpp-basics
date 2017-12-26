#include<stdio.h>

int exp(int x, int y)
{
    if(y == 0)
        return 1;
    else
        return(x * exp(x, y-1));
}

int main()
{
    int a, b, ans;
    scanf("%d %d", &a, &b);

    ans = exp(a, b);
    printf("%d", ans);

    return 0;
}
