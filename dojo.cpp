#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int max = 0, secondmax;
    int arr[5] = {1, 2, 3, 7, 5};
    for (int i = 0; i <= 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        secondmax = arr[i - 1];
    }
    cout << "largest element in array is " << max;
}