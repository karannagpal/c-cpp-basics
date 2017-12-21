#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d, maxi;
    cin >> a >> b >> c >> d;

    maxi = a;
    if(b > maxi)
        maxi = b;
    if(c > maxi)
        maxi = c;
    if(d > maxi)
        maxi = d;

    cout << "Max: " << maxi;

    return 0;
}

/*
the above program
makes 3 comparisons
and uses one extra variable
and it does not changes
the original variables
*/

