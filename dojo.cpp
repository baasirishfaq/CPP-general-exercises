#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, flag = 0;
    cout << "enter array limit ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n;)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (arr[j] == arr[k])
            {
                flag = 1;
            }
        }
        j++;
    }

    if (flag == 1)
    {
        cout << "there is a duplicate in array";
    }
    else
    {
        cout << "no duplicate in array ";
    }
};