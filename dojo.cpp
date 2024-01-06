#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 3 == 0 && n % 5 == 0)
    {
        cout << "fizbuxx" << endl;
    }
    else if (n % 3 == 0)
    {
        cout << "fizz";
    }
    else if (n % 5 == 0)
    {
        cout << "buxx";
    }
    else
    {
        cout << "nothing";
    }
}