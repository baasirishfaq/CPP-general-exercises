#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int cost;
    int stockprice[6]{7, 1, 5, 3, 6, 4};
    int mini = stockprice[0], profit = 0;

    for (int i = 1; i < 6; i++)
    {
        cost = stockprice[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, stockprice[i]);
    }
    cout << "max profit is " << profit;
}