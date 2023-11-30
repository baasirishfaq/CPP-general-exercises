#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int sum = 0, temp = 1, prod, arr[5];
    cout << "enter 5 nums into array :";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    // cout << "TEST PRINT " << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i];
    // }

    for (int i = 0; i < 5; i++)
    {
        temp = temp * arr[i];
    }
    prod = temp;
    cout << "product is = " << prod << endl;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum = " << sum << endl;

    if (prod % sum == 0)
    {
        cout << "yeah";
    }
    else
    {
        cout << "nah";
    }
}