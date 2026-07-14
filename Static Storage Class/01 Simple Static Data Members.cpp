#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int gNo = 101;

void fun()
{
    static int j = 500;
    int i = 1;

    cout<<"\n Value of Non Static Variable = " << i;
    cout<<"\n Value of Static Variable = " << j;
    cout<<"\n Value of Global Variable = " << gNo;

    i++;
    j = j + 10;
    gNo--;

    getch();
    return;
}
int main()
{

        fun();
        fun();

        gNo = 500;

        fun();
        fun();

        getch();
        return 0;
    }
