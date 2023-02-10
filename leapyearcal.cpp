#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int year;
    while (true)
    {
        cout << "enter any year :- " << endl;
        cin >> year;
        if (year % 4 == 0)
        {
            cout << year << " is a leap year " << endl;
        }
        else
        {
            cout << year << " is not a leap year " << endl;
        }
    }
}