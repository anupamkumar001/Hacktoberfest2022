#include<iostream>
using namespace std;
class person
{
    char name[30];
    int age;
public:
    void getdata(void);
    void putdata(void);
};
void person :: getdata(void)
{
    cout<<"enter name : ";
    cin>>name;
    cout<<"enter age: ";
    cin>>age;

}
void person :: putdata(void)
{
    cout <<"\n name: "<< name;
    cout<<"\nage: " <<age;
}
int main ()
{
    person p;
    p.getdata();
    p.putdata();
}
