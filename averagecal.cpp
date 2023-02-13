#include <iostream>
#include <stdio.h>
#include <string>
#include <climits>
#include <string.h>
#include <cstdio>

using namespace std;

int calavg(float numavg, float sum)
{
    float avg;
    avg = sum / numavg;
    cout << "your average is " << avg;
}

int main()
{
    int numavg, sum = 0;
    cout << "how many values will you enter :";
    cin >> numavg;
    int arr[numavg];

    for (int i = 0; i < numavg; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < numavg; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum is " << sum << endl;
    calavg(numavg, sum);
}