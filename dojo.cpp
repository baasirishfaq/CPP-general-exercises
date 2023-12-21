#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, checker;
    cout << "enter array limit :";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            checker = arr[j] - arr[i];
        }
    }
    if (checker > 1)
    {
        cout << "number missing " << endl;
    }
    else
    {
        cout << "no missing number" << endl;
    }
}