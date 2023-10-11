//static member function
#include<iostream>
using namespace std;
class box
{
    public:
    static int length;
    static int breadth;
    static int height;

    static void print()
    {
        cout<<"The value of length is "<<length<<endl;
        cout<<"The value of length is "<<breadth<<endl;
        cout<<"The value of length is "<<height<<endl;
    }
};
//initialize the static data member
    int box::length=10;
    int box::breadth=20;
    int box::height=30;

//driver code
int main()
{
    box b;
    cout<<"Static member of function is called through object name\n"<<endl;
    b.print();
    cout<<"Static member of function is called through class name\n"<<endl;
    box::print();
    return 0;
}    
