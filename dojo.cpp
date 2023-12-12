#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, key;
    cout << "enter array len :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "which ele to find ;";
    cin >> key;
    for (int j = 0; n < 5; j++)
    {
        if (arr[j] == key)
        {
            cout << "element found in array";
        }
    }
}