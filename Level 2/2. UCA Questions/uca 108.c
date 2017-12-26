#include<stdio.h>

int fact(int n)
{
    // base case
    if(n == 1)
        return 1;

    // recursive case
    else
        return (n * fact(n-1));
}

int main()
{
    int ans, n;
    scanf("%d", &n);
    ans = fact(n);
    printf("%d", ans);
    return 0;
}
