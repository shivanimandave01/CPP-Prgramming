#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;


class Animal
{
    private:
        int Age;

    public:
        int Id;
        char Name[20];

    Animal();
    Animal(int Id);
    Animal(Animal &);
    ~Animal();
};
    void Animal :: Animal()
    {
        Age = 20;
        cout<<"Inside Default Constructor";
    }

    void Animal :: Animal(int A_Id)
    {
        Id = A_Id;
        cout<<"Inside Parameterised Constructor";
    }

    void Animal :: Animal(& Animal)
    {
        cout<<"Inside Copy Constructor";
    }

    void Animal :: ~Animal()
    {
        cout<<"Inside Destructor"<<Age;

    }

int main()
{
    Animal Obj1;
    Obj1.Animal();

    cout<<"Age of Animal"<<obj1.Age;

    Obj2.Animal(25);

    cout<<"Age of Animal"<<obj1.Age;

     getch();
     return 0;
}

