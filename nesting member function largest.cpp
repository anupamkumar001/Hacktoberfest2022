#include<iostream>
using namespace std;
class set
{
    int m,n;
public:
    void input (void);
    void display(void);
    void largest(void);

};
void set::input (void )
{
    cout<<"input values of m and n"<<endl;
    cin>>m>>n;
}
void set::largest()
{
    if (m>=n)
        cout<<"largest value ="<<m;
    else
        cout<<"largest value ="<<n;
}
void set::display()
{
    largest();
}
int main()
{
    set A;
    A.input();
    A.display();
    return 0;
}

