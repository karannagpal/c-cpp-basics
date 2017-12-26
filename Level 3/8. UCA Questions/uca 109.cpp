#include<iostream>
using namespace std;

int exp(int x, int y)
{
    if(y == 0)
        return 1;
    else
        return(x * exp(x, y-1));
}

int main()
{
    int a, b, ans;
    cin >> a >> b;

    ans = exp(a, b);
    cout << ans;

    return 0;
}
