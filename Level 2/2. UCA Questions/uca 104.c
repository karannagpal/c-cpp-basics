#include<stdio.h>

int main()
{
    int n, rev = 0, num, ans, x;

    scanf("%d", &n);
    num = n;

    while(n > 0)
    {
        x = n % 10;
        rev = (rev*10) + x;
        n = n / 10;
    }

    ans = num + rev;

    printf("%d", ans);

    return 0;
}
