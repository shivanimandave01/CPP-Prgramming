#include<iostream>
#include<conio.h>
using namespace std;

class Calc
{
    private:
       int N1,N2;

    public:
        int Sum,Sub,Mul;
        float Div;

    Calc();
    Calc(int N1,int N2);
    Calc(Calc &);
    void Set_Values();
    void Addition();
    void Substraction();
    void Multiplication();
    void Division();
    ~Calc();
};
    Calc :: Calc()
    {
        N1 = N2 = Sum = Sub = Mul = Div = 0;
    }

    Calc :: Calc (int No1,int No2)
    {
       N1 = No1;
       N2 = No2;
       cout<<"Value of N1 And N2 is"<<N1<<N2;
    }

    Calc :: Calc(Calc &Ref)
    {
        Sum = Ref.Sum;
        Sub = Ref.Sub;
        Mul = Ref.Mul;
    }

    void Calc :: Set_Values()
    {
        cout<<"Enter a Two Numbers ";
        cin>>N1>>N2;
    }

    void Calc :: Addition()
    {
        Sum = N1 + N2;
    }

    void Calc :: Substraction()
    {
        Sub = N2 - N1;
    }

    void Calc :: Multiplication()
    {
        Mul = N1 * N2;
    }

    void Calc :: Division()
    {
        Div = N2 / N1;
    }

    Calc :: ~Calc()
    {
        cout<<"Destructor "<<N1;
    }

int main()
{
    Calc Obj1;

    Obj1.Set_Values();

    Obj1.Addition();

    cout<< "Addition of Two Numbers Are "<<Obj1.Sum<<endl;

    Obj1.Substraction();

    cout<<"Substraction of Two Number Are "<<Obj1.Sub<<endl;


    Obj1.Multiplication();

    cout<<"Multiplication of Two Number Are "<<Obj1.Mul<<endl;


    Obj1.Division();

    cout<<"Division of Two Number Are "<<Obj1.Div<<endl;

    Calc Obj2(20,40);


    getch();
    return 0;

}
