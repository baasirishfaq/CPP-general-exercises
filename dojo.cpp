#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int max = 0, secondmax = 0;
    int arr[5] = {1, 2, 3, 7, 5};
    for (int i = 0; i <= 5; i++)
    {
        if (arr[i] > max)
        {
            secondmax = max;
            max = arr[i];
        }
        else
        {
            if (arr[i] > secondmax and arr[i] < max)
            {
                secondmax = arr[i];
            }
        }
    }
    cout << "second largest element is " << secondmax;
}