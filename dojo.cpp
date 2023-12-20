#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cout << "enter array limit :";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "the elements in the array are reversed :" << endl;

    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
}