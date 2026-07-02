#include<iostream>
#include<conio.h>

using namespace std;

class Add
{
    public:
            int N1,N2,Sum;

            void Set_values()
            {
                cout<<"Enter 1st Number :";
                cin>>N1;

                cout<<"Enter 2nd Number :";
                cin>>N2;
            }
            void Addition()
            {
                Sum = N1 + N2;
            }
};
    int main()
    {
        Add obj1,obj2,obj3;

        obj1.Set_values();

        obj1.Addition();

        cout<<"Addtion of 1st Number"<<obj1.N1<<"and 2nd Number"<<obj1.N2<<"is = "<<obj1.Sum;

        getch();
        return 0;

        }
