#include<iostream>

using namespace std;

int main()
{
    int n, mini = 10, x;
    cin >> n;
    while(n != 0)
    {
        x = n % 10;
        n = n / 10;

        if(x == 0)
        {
            continue;
        }
        else if (mini > x)
        {
            mini = x;
        }
    }

    cout << mini;

    return 0;
}

