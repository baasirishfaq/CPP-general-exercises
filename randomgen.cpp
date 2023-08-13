#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

const int MAX = 26;

string printRandomString(int n)
{
    char alphabet[MAX] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z'};

    string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % MAX];

    return res;
}

int main()
{
    srand(time(NULL));
    int n = rand();
    if (n > 26)
    {
        for (int n; n > 26; n--)
        {
            cout << n;
        }
    }
    cout << printRandomString(n);
    return 0;
}

// int main()
// {
//     for (int i = 0; i < 2; i++)
//     {
//         cout << rand();
//     }

// }
