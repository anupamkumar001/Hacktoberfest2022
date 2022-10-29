#include <iostream>
#include <string.h>
using namespace std;

class student
{
public:
    string name[100];
    int ID;
    char mail;
    float credit;


    void edit_name()
    {
        //getline(cin, name);
    }

    void input_value()
    {
        cout << "Enter Name: ";
        //cin >> name;
        getline(cin, name);
        cout << "Enter ID: ";
        cin >> ID;
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
        cout << credit << endl;
        cout << mail << endl;
        cout << endl;
    }
};



int main()
{
    student mi[41];

    for(int i=0; i<2; i++)
    {
        cout << "Input mobile info " << i+1 << endl;
        mi[i].input_value();

   }
   for(int i=0; i<2; i++)
        {
            cout << "display mobile info " << i+1 << endl;
            mi[i].display();
        }
}
