#include <iostream>
using namespace std;

// this file checks wheter the given number is odd or even

int main()
{
    while (true)
    {
        int num;
        cout << "enter any number to check odd or even :";
        cin >> num;

        if (num % 2 == 0)
        {
            cout << "the given number is even..." << endl;
        }
        else
        {
            cout << "the given number is odd..." << endl;
        }
    }
}