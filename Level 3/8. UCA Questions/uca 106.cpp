#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(b > a)
        a = b;
    if(c > a)
        a = c;
    if(d > a)
        a = d;

    cout << "Max: " << a;

    return 0;
}

/*
the above program
makes 3 comparisons
and uses no extra variables
but it changes original variables
*/
