#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class book
    public:
    string name;
  int page;
  string writer;
  float value;

void input_data()
{
    cout << "Enter book Name: ";
    getline(cin,name);
    cout << "Enter book page: ";
    cin >> page;
    cout << "Enter mail: ";
    getline(cin,writer);
    cout << "Enter credit: ";
    cin >> value;
}

void display()
{
    cout << endl;
    cout << name << endl;
    cout << page << endl;
    cout << writer  << endl;
    cout << value << endl;
    cout << endl;
}
};


int main()
{
    book stu[41];

    for(int i=0; i<3; i++)
    {
        cout << "Input book information " << i+1 << endl;
        stu[i].input_data();
        cout << "display book's information " << i+1 << endl;
        stu[i].display();
    }



}
