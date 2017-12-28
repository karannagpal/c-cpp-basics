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

    // Step 1 - initializing values of largest and sec_largest
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        sec_largest = arr[1];
    }
    else
    {
        sec_largest = arr[0];
        largest = arr[1];
    }

    // Step 2 - Checking other elements
    for (i = 1; i < n; i++)
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
    }

    cout << "Second largest: " << sec_largest;

    return 0;
}

