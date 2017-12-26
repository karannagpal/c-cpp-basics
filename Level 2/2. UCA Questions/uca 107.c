#include<stdio.h>

int main()
{
    int i = 0, limit = 50, a, b;
    a = 0;
    b = 1;
    while(i <= limit)
    {
        // perfect when limit is even
        printf("%d\n%d\n", a, b);
        a = a + b;
        b = a + b;
        i = i + 2;
    }
    if(limit % 2 != 0)
    {
        //for odd limit, one extra
        printf("%d", a);
    }

    return 0;
}
