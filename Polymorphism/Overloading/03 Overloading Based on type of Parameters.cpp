#include<iostream>
#include<conio.h>
using namespace std;

class Product
{
    public:
        int N1;
        float N2,Sum;

    Product();
    ~Product();
    void Add(int N1);
    void Add(float N2);
};
    Product :: Product()
    {
        N1 = 0;
        N2 = 0.0;
        Sum = 0;
    }
    void Product :: Add(int N1)
    {
        Sum += N1;
    }
    void Product :: Add(float N2)
    {
        Sum += N2;
    }
    Product :: ~Product()
    {
        cout<<"Inside Destructor";
    }
int main()
{
    Product pObj;

    pObj.Add(30);

    cout<<"Addition of Number"<<Sum;

    pObj.Add(5);

    cout<<"Addition of Number"<<Sum;

    getch();
    return 0;
}
