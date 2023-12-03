#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cout << "enter array lim :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "array elements are :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << "reverse array is : " << endl;
    for (int j = n - 1; j >= 0; j--)
    {
        cout << arr[j];
    }
}
