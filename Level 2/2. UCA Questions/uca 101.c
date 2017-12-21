#include<stdio.h>

int main()
{
    int n, b = 0, x, pow = 1, carry = 0;
    //scanf("%d", &n);
    n = 1234;
    while(n != 0)
    {
        b = b + carry;
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
    }
    printf("%d", b);
    return 0;
}
