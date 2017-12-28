#include<iostream>
using namespace std;

int main()
{
    int i, n, largest, sec_largest;

    cout << "Enter number of values: ";
    cin >> n;

    int arr[n];

    cout << "Enter values:\n";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    largest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] != largest)
        {
            sec_largest = arr[i];
            break;
        }
    }

    while(i < n)
    {
        if (arr[i] > largest)
        {
            sec_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > sec_largest)
        {
            sec_largest = arr[i];
        }
        i++;
    }

    cout << "Second largest: " << sec_largest;

    return 0;
}
