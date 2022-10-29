#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class mobile
{
public:
    string name;
    int brandno;
    int IMMI;
    int box;
    float price;


    void input_value()
    {
        cout << "Enter Name: ";
        cin>>name;
        cout << "Enter BRAND NO: ";
        cin >> brandno;
        cout << "Enter IMMI NO: ";
        cin >> IMMI;
        cout << "Enter HOW MANY PRODUCT IN BOX: ";
        cin >> box;
        cout << "Enter PRICE: ";
        cin >> price;

    }

    void display()
    {
        cout << endl;
        cout << name << endl;
        cout << brandno << endl;
        cout << IMMI << endl;
        cout << box << endl;
        cout << price<< endl;
        cout << endl;
    }
};


int main()
{
    mobile mi[41];

    cout<< "WELCOME TO MOBILESHOP " <<endl;
    cout<<" FOR ENTER DATA PRESS 1 " <<endl;
    int a,i,c=0;
    cin>> a;

    if(a==1)
    {
        cout<< "ENTER YOUR PASSWORD"<<endl;
        int b;
        cin>> b;
        if(b==123456)

        {
            for(int i=0; i<3; i++)
            {
                cout << "INPUT MOBILE INFO  " << i+1 << endl;
                mi[i].input_value();
                c++;
            }
        }
        else
        {
            cout<< "YOUR PASSWORD IS WRONG "<<endl;
        }

    }

    if(c==0)
    {
        cout<< "THERE IS NO DATA "<<endl;
    }
    else
    {
        for(int i=0; i<3; i++)
        {
            cout << "DISPLAY MOBILE INFO " << i+1 << endl;
            mi[i].display();
        }
    }
}
