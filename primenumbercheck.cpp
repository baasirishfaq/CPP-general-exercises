#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num = 0, i;
    while (true)
    {
        cout << "enter any number to check whether it is prime or not :- ";
        string tester, temp = " ";
        cin >> tester;
        int len = tester.size();
        for (int i = 0; i < len; i++)
        {
            if (((tester[i] >= '0' && tester[i] <= '9')))
            {
                temp += tester[i];
            }
        }
        tester = temp;
        cout << tester << endl;
        tester = num;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << num << " is not a prime number " << endl;
                break;
            }
        }
        if (i == num)
        {
            cout << num << " is a prime number " << endl;
        }
        if (num == 0)
        {
            break;
        }
    }
}