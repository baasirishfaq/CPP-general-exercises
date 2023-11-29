#include <iostream>
#include <stdio.h>

using namespace std;

// this is used for daily practice....

int main()
{
    int n, max = 0;
    cout << "enter limit for array :";
    cin >> n;
    int arr[n];
    cout << "enter elements in array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "elements of array are: " << endl;
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "largest number " << max;
}