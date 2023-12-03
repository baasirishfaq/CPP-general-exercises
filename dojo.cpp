#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, sum = 0;
    cout << "enter array lim :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "total sum of elements in array is " << sum;
}
