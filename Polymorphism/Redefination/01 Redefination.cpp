#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
    public:
        int Num;

    Base();
    ~Base();

};
 Base :: Base()
{
    Num = 30;
    cout<<"Inside Base Constructor"<<endl;
}
 Base :: ~Base()
 {
    cout<<"Inside Base Destructor"<<endl;
 }

class Derived : public Base
 {
    public:
        int Num;

    Derived();
    ~Derived();
};
Derived :: Derived()
{
    Num = 20;
    cout<<"Inside Derived Constructor"<<endl;
}
Derived :: ~Derived()
{
    cout<<"Inside Derived Destructor"<<endl;
}
int main()
{
    Base obj1;
    Derived obj2;

    getch();
    return 0;
}
