#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 4 == 0)
        {
            continue;
        }

        if ((i % 3 == 0) && (i % 5 == 0))
        {
            cout << "fizzbuzz";
        }
        else if (i % 3 == 0)
        {
            cout << "fizz";
        }
        else if (i % 5 == 0)
        {
            cout << "buzz";
        }
    }
}