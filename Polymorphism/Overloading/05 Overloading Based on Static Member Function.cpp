#include<iostream>
#include<conio.h>
using namespace std;

class Book
{
    public:
        int B_Id;
        static int Pages;

    Book();
    ~Book();
    void display(int Pages);
    static void dispaly(int pages);
};

    Book :: Book()
    {
        B_Id = 20;
    }
    void Book :: display(int Pages)
    {
        cout<<"Pages in the non-static Book is "<<Pages;
    }
    static void Book :: display(int B_Id)
    {
        cout<<"Book ID in static Book is "<<B_Id;
    }
    Book :: ~Book()
    {
        cout<<"Destructor of Book";
    }
int main()
{
    Book bObj;

    bObj.display(200);

    getch();
    return 0;
}
