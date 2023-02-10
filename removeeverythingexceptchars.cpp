#include <iostream>
#include <stdio.h>

using namespace std;

/*PROGRAM TO REMOVE EVERYTHING FROM A STRING EXCEPT CHARS AND NUMBERS.....*/

int main()
{
    string line;
    string temp = " ";
    cout << "Enter any string :: ";
    cin >> line;

    cout << "\nThe Original String is :: " << line << endl;

    int len = line.size();

    for (int i = 0; i < len; ++i)
    {
        if (((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= '0' && line[i] <= '9')))
        {
            temp += line[i];
        }
    }
    line = temp;
    cout << "\nAfter Removing Characters, String is :: " << line << endl;

    return 0;
}