#include <iostream>
#include <stdio.h>

using namespace std;

/*This program takes an array and removes the duplicates in the array */

int main()
{
    int n;
    cout << "enter the length of array :";
    cin >> n;
    int arr[n];
    cout << "enter values in array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}