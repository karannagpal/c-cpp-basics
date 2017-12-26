#include<iostream>
using namespace std;

int fact(int n)
{
    // base case
    if(n == 1)
        return 1;

    // recursive case
    else
        return (n * fact(n-1));
}

int main()
{
    int ans, n;
    cin >> n;
    ans = fact(n);
    cout << ans;

    return 0;
}

