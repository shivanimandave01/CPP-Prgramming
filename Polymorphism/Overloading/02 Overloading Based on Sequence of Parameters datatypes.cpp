#include<iostream>
#include<conio.h>
using namespace std;

class Product
{
    public:
        int N1;
        float N2,Sum;

    Product();
    void Add(int,float);
    void Add(float,int);
    ~Product();
};
    Product :: Product()
    {
        N1 = 30;
        N2 = 20.25;
    }
    void Product :: Add(int N1,float N2)
    {
        Sum = N1 + N2;
    }
    void Product :: Add(float N2,int N1)
    {
        Sum = N1 + N2;
    }
   Product :: ~Product()
   {

   }
   int main()
   {
   Product pObj;

   pObj.Add(15.5,5);

   cout<<"Addition of two Numbers = "<<pObj.Sum<<endl;

   pObj.Add(20,20.5);

   cout<<"Addition of two Numbers = "<<pObj.Sum<<endl;

   getch();
   return 0;
}

