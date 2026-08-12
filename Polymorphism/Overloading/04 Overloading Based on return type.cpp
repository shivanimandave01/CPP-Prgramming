#include<iostream>
#include<conio.h>
using namespace std;

class Product
{
    public:
        int P_Id,P_Pr;

    Product();
    ~Product();
    void display(int P_Id);
    int display(int P_Pr);
};
    Product :: Product()
    {
        P_Id = 10;
        P_Pr = 100;
    }
    void Product :: display(int P_Id)
    {
        cout<<"Product Id is "<<P_Id;
    }
    int Product :: display(int P_Pr)
    {
        cout<<"Product Price is "<<P_Pr;
        return P_Pr;
    }
    Product :: ~Product()
    {
        cout<<"Destructor of Product";
    }

int main()
{
    Product pObj;

    pObj.display(20);
    pObj.display(200);

    getch();
    return 0;
}
