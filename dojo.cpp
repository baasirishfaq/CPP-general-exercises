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
                cout << "element " << arr[k] << " has a duplicate" << endl;
            }
        }
        j++;
    }

    if (flag == 1)
    {
        // only to check if there is a duplicate without specifing which element has a duplicate...
    }
    else
    {
        cout << "no duplicate in array ";
    }
};