//outer class definition
#include<iostream>
using namespace std;
class person{
    char name[30];
    int age;
    public:
    void getdata()
    {
        cout<<"Enter name and age :-"<<endl;
        cin>> name>> age;
    };
    void putdata();
    };
    void person::putdata()
    {
        cout<<name<<age<<endl;
    }

int main()
{
    person p,p1;
    p.getdata();
    p1.getdata();
    p.putdata();
    p1.putdata();
}
