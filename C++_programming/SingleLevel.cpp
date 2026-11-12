#include<iostream>
using namespace std;

class Base
{
    public : 
        int i, j;

        Base()
        {
            cout<<"Inside base constructor \n";
            i = 0;
            j = 0;
        }

        ~Base()
        {
            cout<<"Inside base destructor \n";
        }

        void fun()
        {
            cout<<"inside base fun \n";
        }
};

class Derived : public Base
{

};

int main()
{
    Base bobj;
    //Derived dobj;

    return 0;
}