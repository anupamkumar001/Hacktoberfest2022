#include<iostream>
using namespace std;
class item
{
    int a ;
    float b;
public:
    void getdata()
    {
        cout<< " enter number  " ;
        cin>>a;
        cout<< " enter cost  " ;
        cin>>b;
    }
    void putdata(void)
    {
        cout <<"number :"<<a <<"\n";
        cout<<"cost :"<<b<<"\n";

    }
};
int main ()
{
    item x;
    cout <<"\nobject x " <<"\n";
    x.getdata();
    x.putdata();
    item y;
    cout <<"\nobject y" <<"\n";
    y.getdata();
    y.putdata();
}
