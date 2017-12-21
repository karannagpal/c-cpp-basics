#include<iostream>

using namespace std;

int main()
{
    int n, x, b = 0, carry = 0, pow = 1;
    //cin >> n;
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
    cout << b;
    return 0;
}
