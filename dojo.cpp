#include <iostream>
#include <stdio.h>

using namespace std;

// this is used for daily practice....

int main()
{
    int n, arr[n];
    cout << "enter limit for array :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "elements of array are";
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
    }
}