#include <iostream>

using namespace std;

int main()
{
    int numstr, numend;
    cout << "enter starting number :";
    cin >> numstr;
    cout << "enter limit number :";
    cin >> numend;
    for (int i = numstr; i <= numend; i++)
    {
        cout << i << endl;
    }
}