#include<iostream>
#include<conio.h>
using namespace std;

class Product
{
    public:
        int N1,N2,Sum;
        float N3;

    Product();
    void Add(int N1,int N2);
    void Add(int N1,int N2,int N3);
    ~Product();
};
    Product :: Product()
    {
        N1 = 20;
        N2 = 30;
        N3 = 40;
        Sum = 0;
    }
    void Product :: Add(int N1,int N2)
    {
        Sum = N1 + N2;
    }
    void Product :: Add(int N1,int N2,int N3)
    {
        Sum = N1 + N2 + N3;
    }
    Product :: ~Product()
    {
        cout<<"Sum ="<<Sum<<endl;
    }
int main()
{
    Product pObj;

    pObj.Add(20,30);

    cout<<"Addition of two Numbers = "<<pObj.Sum<<endl;

    pObj.Add(60,40,50);

    cout<<"Addition of two Numbers = "<<pObj.Sum<<endl;

    getch();
    return 0;
}
