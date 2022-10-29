#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class Student
{
public:
    string name;
    int ID;
    int intake;
    int section;
    string mail;
    float credit;


    void edit_name()
    {
        getline(cin,name);
    }

    void input_value()
    {
        cout << "Enter Name: ";
        getline(cin,name);
        cout << "Enter ID: ";
        cin >> ID;
        cout << "Enter intake: ";
        cin >> intake;
        cout << "Enter section: ";
        cin >> section;
        cout << "Enter credit: ";
        cin >> credit;
        cout << "Enter mail: ";
        cin >> mail;
    }

    void display()
    {
        cout << endl;
        cout << name << endl;
        cout << ID << endl;
        cout << intake << endl;
        cout << section << endl;
        cout << credit << endl;
        cout << mail << endl;
        cout << endl;
    }
};



int main()
{
    Student object1;
    object1.input_value();
    object1.display();

    object1.edit_name();

}
