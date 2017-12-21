#include<iostream>

using namespace std;

int main()
{
    int m, n, x, y, sum, total = 0, carry = 0, pow = 1;
    cin >> m >> n;

    while(m != 0 || n != 0)
    {
        x = m % 10;
        y = n % 10;

        //next 2 if's are essential
        //for unequal lengths of numbers
        if(n == 0)
        {
            total = total + (m * pow);
            break;
        }
        if(m == 0)
        {
            total = total + (n * pow);
            break;
        }

        sum = x + y + carry;
        if(sum > 9)
        {
            carry = 1;
            sum = sum % 10;
        }
        else
        {
            carry = 0;
        }

        total = total + (sum * pow);
        m = m / 10;
        n = n / 10;
        pow = pow * 10;
    }
    cout << total;

    return 0;
}
