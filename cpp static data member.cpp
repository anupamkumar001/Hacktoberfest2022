#include<iostream>
using namespace std;
class item
{
    static int countNum;
    int number;
public:
    void getdata(int a)
    {
        number = a;
        countNum++;

    }
    void getcount(void)
    {
        cout<<"count : " << countNum<<"\n";

    }

};
int item::countNum;


int main()
{
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(100);
    c.getdata(100);

    cout<<"after reading data"<<"\n";

    a.getcount();
    b.getcount();
    c.getcount();
    return 0;

}
