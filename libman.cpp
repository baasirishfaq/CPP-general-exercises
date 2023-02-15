// elling og
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

class Library
{
public:
    int bookno;
    int id;
    int price;
    int pages;
    char name[50];
    char author[50];
    char student[12];
};

int main()
{
    Library lib[20];
    int input = 0;
    int count = 0;

    while (true)
    {
        cout << "enter 1 to input details like id, name, author, student name, price, pages" << endl;
        cout << "enter 2 to display details" << endl;
        cout << "enter 3 to quit" << endl;
        cin >> input;

        switch (input)
        {
        case 1:
        start:
            cout << "enter book serial no.";
            cin >> lib[count].bookno;
            cout << "enter book id" << endl;
            cin >> lib[count].id;
            cout << "enter book name" << endl;
            cin.getline(lib[count].name, 100, '-');
            // cin >> lib[count].name, cant use spaces while using this type of value catcher;
            cout << "enter book author" << endl;
            cin.getline(lib[count].author, 100, '-');
            // cin >> lib[count].author;
            cout << "enter student name" << endl;
            cin.getline(lib[count].student, 100, '-');
            // cin >> lib[count].student;
            cout << "enter book price" << endl;
            cin >> lib[count].price;
            cout << "enter book pages" << endl;
            cin >> lib[count].pages;
            count++;
            break;
        case 2:
            for (int i = 0; i < count; i++)
            {
                cout << "\nShowing details of book no  :-" << lib[i].bookno << endl;
                cout << "\nbook id :" << lib[i].id << endl;
                cout << "\nbook name :" << lib[i].name << endl;
                cout << "\nauthor name :" << lib[i].author << endl;
                cout << "\nstudent name :" << lib[i].student << endl;
                cout << "\nbook price :" << lib[i].price << endl;
                cout << "\nbook pages :" << lib[i].pages << endl;
            }
            break;

        case 3:
            cout << "quit successful...";
            exit(0);
            break;

        default:
            cout << "you have entered wrong value plz try again" << endl;
            goto start;
        }
    }
}