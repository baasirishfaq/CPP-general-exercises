#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int arr[4], index = -1;
    cout << "enter 4 values in array :";
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] == arr[j])
            {
                index = i;
                break;
            }
        }
        if (index != -1)
        {
            for (i = index; i < 4 - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            cout << "New Array : ";
            for (i = 0; i < 4 - 1; i++)
            {
                cout << arr[i];
            }
        }
    }
}