#include<iostream>
#include<conio.h>
using namespace std;

class Calc
{
public:
    int Num1, Num2;

    Calc()
    {
        cout << "Inside Default Constructor\n";
    }

    Calc(int x)
    {
        Num1 = x;
    }

    int Add(int a, int b)
    {
        return a + b;
    }

    ~Calc()
    {
        cout << "\nInside Calc Destructor";
    }
};

class Total : public Calc
{
public:
    int N1, N2, Sum;

    Total();

    void MyAdd(int a, int b);

    ~Total();
};

Total::Total()
{
    N1 = 0;
    N2 = 0;
    Sum = 0;
}

void Total::MyAdd(int a, int b)
{
    N1 = a;
    N2 = b;

    Sum = Add(a, b);

    cout << "Sum = " << Sum << endl;
}

Total::~Total()
{
    cout << "Inside Total Destructor " << Sum << endl;
}

int main()
{
    Total Obj1;

    Obj1.MyAdd(10,20);

    getch();
    return 0;
}
