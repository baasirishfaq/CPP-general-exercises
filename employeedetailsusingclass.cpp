// dynamic constructors
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class employee
{
    char name[20], addr[20], desig[20];

public:
    void getemp()
    {
        cout << "enter the name of the employee :";
        cin >> name;
        cout << "enter the address of the employee :";
        cin >> addr;
        cout << "enter the designation of employee :";
        cin >> desig;
    }
    void showemp()
    {
        cout << "\nthe name of the employee is : " << name;
        cout << "\naddress is :" << addr;
        cout << "\ndesignation is :" << desig;
    }
};
class salary
{
    float bsal, ta, da, ma, nsal;

public:
    void getsal()
    {
        cout << "\nenter the salary of the employee ";
        cin >> bsal;
        if (bsal > 25000)
        {
            ta = (20 * bsal) / 100;
            da = (13 * bsal) / 100;
            ma = (10 * bsal) / 100;
        }
        else
        {
            ta = (7 * bsal) / 100;
            da = (4 * bsal) / 100;
            ma = (3 * bsal) / 100;
        }
        nsal = bsal + ta + da + ma;
    }
    void showsal()
    {
        cout << "\nyour basic sal is :" << bsal;
        cout << "\nyour ta is :" << ta;
        cout << "\nyour da is :" << da;
        cout << "\nyour ma is :" << ma;
        cout << "\nyour net sal is :" << nsal;
    }
};
class department : public employee, public salary
{
    char dname[20], dloc[20];
    int did;

public:
    void getdep()
    {
        cout << "enter the dep name ";
        cin >> dname;
        cout << "enter the dep loc ";
        cin >> dloc;
        cout << "enter the deparment number ";
        cin >> did;
    }
    void showdep()
    {
        cout << "\nthe dep name is :" << dname;
        cout << "\nthe dep loc is :" << dloc;
        cout << "\nthe deparment number is :" << did;
    }
};
int main()
{
    department s1, s2;
    s1.getemp();
    s1.getsal();
    s1.getdep();
    cout << "\nthe details of the first employee are:- ";
    s1.showemp();
    s1.showsal();
    s1.showdep();
    cout << "\nenter details of second employee :- ";
    s2.getemp();
    s2.getsal();
    s2.getdep();
    cout << "\nthe details of second employee are :- ";
    s2.showemp();
    s2.showsal();
    s2.showdep();
    getch();
}