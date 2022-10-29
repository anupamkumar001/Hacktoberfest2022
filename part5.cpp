#include <iostream>
#include <string.h>
using namespace std;

class person
{
private:
    char name[100];
    int age;

public:
    void set_name(char new_name[]);
    void set_age(int new_age);

    char* get_name();
    int get_age();


};


void person :: set_name(char new_name[])
{
   strcpy(name,new_name);
}


void person :: set_age(int new_age)
{
    age = new_age;
}

char* person :: get_name()
{
    return name;
}

int person :: get_age()
{
    return age;
}

int main()
{
    person p1;
    p1.set_name("Imran");
    p1.set_age(20);

    cout << p1.get_name() << endl;
    cout << p1.get_age();
}




