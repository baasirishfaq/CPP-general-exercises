#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int digitct = 0;

    if (n < 1000000000)
    {
        for (int num = n; num > 0; num = num / 10)
        {
            digitct++;
        }
    }
    if (n > 1000000000)
    {
        for (int num = n; num > 0; num = num / 100)
        {
            digitct++;
        }
    }
    cout << "it has " << digitct << " digits";
}