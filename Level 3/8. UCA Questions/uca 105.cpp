#include<iostream>

using namespace std;

int main()
{
    int i, j, k, n = 6;
    //cin >> n;

    for(i = n; i > 0; i--)
    {
        for(j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        for(k = -1; k <= 2*(n-i)-1; k++)
        {
            if(k > 0)
            {
                cout << "  ";
            }
        }

        for(j = i; j > 0; j--)
        {
            if(j == n)
                continue;
            else
            {
                cout << j << " ";
            }
        }

        cout << endl;
    }
    return 0;
}
