#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class Student
{
public:
    char name[100];
    int ID;
    int intake;
    int section;
    string mail;
    float credit;


    void edit_name()
    {
        getchar();
        cout<<"ENTER NEW  NAME"<<endl;
        gets(name);
        display();
    }
    void edit_ID()
    {
        getchar();
        cout<<"ENTER NEW ID"<<endl;
        cin>>ID;
        display();
    }
    void edit_intake()
    {
        getchar();
        cout<<"ENTER NEW INTAKE"<<endl;
        cin >> intake;
        display();
    }
    void edit_section()
    {
        getchar();
        cout<<"ENTER NEW SECTION"<<endl;
        cin >> section;
        display();
    }
    void edit_credit()
    {
        getchar();
        cout<<"ENTER NEW CREDIT"<<endl;
        cin >> credit;
        display();
    }
    void edit_mail()
    {
        getchar();
        cout<<"ENTER NEW MAIL"<<endl;
        cin >> mail;
        display();
    }

    void input_value()
    {
        cout << "Enter Name: ";
        gets(name);
        cout << "Enter ID(LAST 5 DIGIT): ";
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
    int b;
    cout<<" PRESS 1 FOR EDIT" ;
    cin>>b;
    if(b==1)
    {
        int a;
        cout<<"PRESS 1 FOR EDIT NAME"<<endl;
        cout<<"PRESS 2 FOR EDIT ID"<<endl;
        cout<<"PRESS 3 FOR EDIT INTAKE"<<endl;
        cout<<"PRESS 4 FOR EDIT SECTION"<<endl;
        cout<<"PRESS 5 FOR EDIT CREDIT"<<endl;
        cout<<"PRESS 6 FOR EDIT MAIL"<<endl;
        cin>>a;
        switch(a)
        {
        case 1:
            object1.edit_name();
            break;
        case 2:
            object1.edit_ID();
            break;
        case 3:
            object1.edit_intake();
            break;
        case 4:
            object1.edit_section();
            break;
        case 5:
            object1.edit_credit();
            break;
        case 6:
            object1.edit_mail();
            break;
        }

    }
    else
    {
        cout<< "thank you";
    }

}





