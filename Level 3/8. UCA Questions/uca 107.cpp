#include<iostream>
using namespace std;

int main()
{
    int i = 0, limit = 10, a, b;
    a = 0;
    b = 1;
    while(i <= limit)
    {
        // perfect when limit is even
        cout << a << endl << b << endl;
        a = a + b;
        b = a + b;
        i = i + 2;
    }
    if(limit % 2 != 0)
    {
        // for odd limit, one extra
        cout << a;
    }

    return 0;
}

