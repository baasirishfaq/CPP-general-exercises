#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, flag = 0;
    cout << "enter array limit :";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; i < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        cout << "there is a duplicate in array";
    }
    else
    {
        cout << "no duplicate in array ";
    }
}