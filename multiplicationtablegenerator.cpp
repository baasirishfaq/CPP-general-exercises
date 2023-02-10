#include <iostream>
using namespace std;

int main()
{

    int table, start, limit;

    cout << "table of, start, limit :- ";
    cin >> table >> start >> limit;

    while (start <= limit)
    {
        cout << table << " * " << start << " = " << table * start << endl;
        start++;
    }
    return 0;
}