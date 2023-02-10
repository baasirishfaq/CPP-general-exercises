#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    while (true) /* The while true loop is not needed, it is just used so that the program keeps on running continiously
                 and you dont have to re-run again and again every time you give a new input. */
    {
        int num, rem, sum = 0;
        cout << "enter any numbers for sum : " << endl;
        cin >> num;
        while (num != 0)
        {
            rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }
        cout << "sum is " << sum << endl;
    }
}