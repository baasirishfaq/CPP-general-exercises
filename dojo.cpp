#include <iostream>
#include <stdio.h>

using namespace std;

int fuelcal(int dis)
{
    int fuel;
    fuel = dis * 10;
    if (fuel < 100)
    {
        cout << "reqd fuel is 100 ";
    }
    else
    {
        cout << "reqd fuel is " << fuel;
    }
}

int main()
{
    int dis;
    cout << "enter the distance you have to go :";
    cin >> dis;
    fuelcal(dis);
}