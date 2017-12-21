#include<iostream>
using namespace std;

int main()
{
    int n, rev = 0, num, ans, x;
    cin >> n;
    num = n;

    while(n > 0)
    {
        x = n % 10;
        rev = (rev*10) + x;
        n = n / 10;
    }

    ans = num + rev;
    cout << ans;

    return 0;
}
