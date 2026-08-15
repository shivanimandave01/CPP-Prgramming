#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
    public:
        int N1,N2,Sum;

    Base();
    ~Base();
    void Add(int N1,int N2);
    void Display();
};
    Base :: Base()
    {
        N1 = 0;
        N2 = 0;
        Sum = 0;
    }
     void Base :: Add(int N1,int N2)
    {
        Sum = N1 + N2;
        cout<<"Inside Base Class Addition of Two Numbers is"<<Sum<<endl;
    }
    void Base :: Display()
    {
        cout<<"Inside Base Class Addition of Two Numbers is"<<Sum<<endl;
    }
    Base :: ~Base()
    {
    }
class Derived : public Base
{
    public:
        int Sum;

        Derived();
        ~Derived();
        void Add (int ,int);
};
    Derived :: Derived()
    {
        Sum = 0;
        cout<<"Inside Derived Constructor"<<endl;
    }
    void Derived :: Add(int N1,int N2)
    {
        Sum = N1 + N2;
        cout<<"Inside Derived Class Addition of Two Numbers is"<<Sum<<endl;
    }
    Derived :: ~Derived()
    {
    }
int main()
{
    Derived dObj;

    Base *bPtr = &dObj;//upcasting

    bPtr->Add(20,30);

    getch();
    return 0;
}

