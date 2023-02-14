#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

/*This program calculates the average of as many numbers as you want, without having to declare
the size of array before putting in the numbers, input as many numbers as you want then press 0
when you are finished. */

int calavg(float numavg, float sum)
{
    float avg;
    avg = sum / numavg;
    cout << "your average is " << avg;
}

int main()
{
    int sum = 0, numavg;
    vector<string> str;
    string uinput;
    cin >> uinput;

    while (uinput != "0")
    {
        str.push_back(uinput);
        cin >> uinput;
    }

    for (unsigned int i = 0; i < str.size(); i++)
    {
        cout << str[i] << endl;
        sum = sum + stoi(str[i]);
    }
    cout << "the sum of your numbers is " << sum << endl;
    cout << "the size of your string is " << (str.size()) << endl;
    numavg = (str.size());
    calavg(numavg, sum);
}
