#include <iostream>
using namespace std;

// program used to print and sum a number series.....

int main()
{
    int n1 = 1, n2 = 0, n3, i, limit;
    cout << "how long should the number series be :- ";
    cin >> limit;
    cout << n1 << n2;
    for (i = 1; i <= limit; i++)
    {
        n3 = n1 + n2;       // n3 = 1 + 0
        n1 = n2;            // 1 = 0
        n2 = n3;            // 0 = 1
        cout << n3 << endl; // n3=1
    }
}