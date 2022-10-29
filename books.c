#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class book
{
public:
    string name;
    int page;
    float value;
    string writer;





    void input_information()
    {
        cout << "Enter book Name: ";
        getline(cin,name);
        cout << "Enter how many page page: ";
        cin >> page;
        cout << "Enter value: ";
        cin >> value;
        cout << "Enter writer name: "<<endl;
        getline(cin,writer);
        cout<< " "<<endl;

    }

    void display()
    {
        cout << endl;
        cout << name << endl;
        cout << page << endl;
        cout << writer << endl;
        cout << value << endl;
        cout << endl;
    }
};


int main()
{
    book bk[41];

    for(int i=0; i<3; i++)
    {
        cout << "Input information for " << i+1 << endl;
        bk[i].input_information();

    }

    for(int i=0; i<3; i++)
    {

        cout << "display information for " << i+1 << endl;
        bk[i].display();
    }


}

