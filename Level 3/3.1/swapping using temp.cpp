#include<iostream>

using namespace std;

int main()
{
    /*
    swapping two numbers using temp
    numbers are entered by users
    */
    int a, b, temp;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "Value of a and b after swapping: " << a << " and " << b << endl;

    return 0;
}

