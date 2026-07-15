#include<iostream>
#include<conio.h>
using namespace std;

class Numbers
{
    public:
            int No1,No2;

            static int Num;

    Numbers();
    Numbers(int y);
    void Change();
};
    Numbers :: Numbers()
    {
        No1 = 0;
        No2 = 0;
        Num = 1;
    }
    Numbers :: Numbers(int y)
    {
        No1 = No2 = y;
        Num += 10;
    }
    void Numbers :: Change()
    {
        No1 = 10;
        No2 = 100;
        Num = 500;
    }

int Numbers::Num = 100;
int main()
{
    cout << "\n Static variable Value => " << Numbers::Num;

    Numbers Obj1;

    cout << "\n Object Values => " << Obj1.No1 << " => " << Obj1.No2 << " => " << Obj1.Num << endl;

    getch();

    Numbers Obj2(5);

    cout << "\n Object Values => " << Obj2.No1 << " => " << Obj2.No2 << " => " << Obj2.Num << endl;

    getch();

    Obj2.Change();

    cout << "\n Object Values => " << Obj2.No1 << " => " << Obj2.No2 << " => " << Obj2.Num << endl;

    getch();
    return 0;
}
