#include<iostream>
#include<conio.h>
using namespace std;

class India
{
    public:
        int P_No;

    India();
    ~India();

};
class Maharashtra : public India
{
    public:
        int P_No;

    Maharashtra();
    ~Maharashtra();
};
class Satara : public Maharashtra
{
    public:
        int P_No;

    Satara();
    ~Satara();
};
    India :: India()
    {
        P_No = 300;
        cout<<"Population of India "<<P_No<<endl;
    }

    Maharashtra :: Maharashtra()
    {
        P_No = 200;
        cout<<"Population of Maharashtra"<<P_No<<endl;
    }

    Satara :: Satara()
    {
        P_No = 100;
        cout<<"Population of Satara"<<P_No<<endl;
    }

    India :: ~India()
    {
        cout<<"Inside Constuctor India"<<P_No<<endl;
    }

    Maharashtra :: ~Maharashtra()
    {
        cout<<"Inside Constructor Maharashtra"<<P_No<<endl;
    }

    Satara :: ~Satara()
    {
        cout<<"Inside Constructor Satara"<<P_No<<endl;
    }
int main()
{
    India bObj1;
    Satara bObj2;
    Maharashtra dObj;
    getch();
    return 0;
}
