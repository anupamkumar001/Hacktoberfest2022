#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class book
{
public:
    string name;
    string writer;
    int page;
    float value;

    void input_information()
    {
        cout << "Enter book Name: ";
        getline(cin,name);
        cout << "Enter writer name: ";
        getline(cin,writer);
        cout << "Enter how many page : ";
        cin >> page;
        cout << "Enter value: ";
        cin >> value;


    }

    void display()
    {
        cout <<"book Name" <<name << endl;
        cout <<"writer name:"<<writer << endl;
        cout <<" pages " << page << endl;
        cout <<"value " <<value << endl;
    }
    void edit()
    {
        cout << "Enter book Name: ";
        getline(cin,name);
        cout << "Enter writer name: ";
        getline(cin,writer);
        cout << "Enter how many page : ";
        cin >> page;
        cout << "Enter value: ";
        cin >> value;
    }
};


int main()
{
    book bk[100];
    int n,j;
    cout<<"how many books do you want to enter"<<endl;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout << "Input information for " << i+1 << endl;
        bk[i].input_information();

    }

    for(int i=0; i<n; i++)
    {

        cout << "display information for " << i+1 << endl;
        bk[i].display();
    }
    cout<< "press 1 for edit "<<endl;
    cin>>j;
    if (j=1)
    {  int k;
        cout<<"which book do you want to edit"<<endl;
        cin>>k;
        bk[k].edit();

    }

    return 0;
}




