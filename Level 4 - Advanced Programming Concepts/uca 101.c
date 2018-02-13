#include<stdio.h>

int main()
{
    int n, b = 0, x, pow = 1, carry = 0;
    scanf("%d", &n);
    while(n != 0)
    {
        b = b + (carry * pow);
        x = n % 10;
        if(x == 9)
        {
            carry = 1;
            x = 0;
        }
        else
        {
            carry = 0;
            x++;
        }
        b = b + (x*pow);
        n = n/10;
        pow = pow * 10;

        if(n == 0 && carry == 1)
        {
            b = b + (carry * pow);
        }

    }
    printf("%d", b);
    return 0;
}
