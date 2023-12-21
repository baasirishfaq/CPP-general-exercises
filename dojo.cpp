#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, checker, sn, missingnum, sa = 0;
    cout << "enter array limit :";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sn = n * (n + 1) / 2;
    for (int i = 0; i < n; i++)
    {
        sa = sa + arr[i];
    }
    cout << "sn " << sn << endl;
    cout << "sa " << sa << endl;

    missingnum = sn - sa;
    cout << "missing num is " << missingnum;
}