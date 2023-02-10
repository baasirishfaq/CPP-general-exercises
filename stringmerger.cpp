#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class dynamicconst
{
    char *name;
    int size;

public:
    dynamicconst()
    {
        name = NULL;
        size = 0;
    }
    dynamicconst(char *s)
    {
        size = strlen(s);
        name = new char(size + 1);
        strcpy(name, s);
    }
    void showdata()
    {
        cout << "\n name is " << name;
        cout << "\n size is " << size;
    }
    dynamicconst getmerge(dynamicconst s2)
    {
        dynamicconst temp;
        temp.size = size + s2.size;
        temp.name = new char(temp.size + 1);
        strcpy(temp.name, name);
        strcat(temp.name, s2.name);
        return (temp);
    }
};
int main()
{
    dynamicconst s1("good");
    dynamicconst s2("day");
    dynamicconst s3;
    s1.showdata();
    s2.showdata();
    s3 = s1.getmerge(s2);
    cout << "\n the merger of strings is ";
    s3.showdata();
    return (0);
}

