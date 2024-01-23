#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cout << "enter numeber ";
    cin >> x;
    string s = to_string(x);
    reverse(s.begin(), s.end());
    int m = stoi(s);
    cout << m;
}