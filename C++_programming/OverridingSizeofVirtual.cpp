#include<iostream>
using namespace std;

class Base
{
    public :
        int i, j;

        void fun()
        {
            cout<<"Inside Base fun \n";
        }

        virtual void gun()
        {
            cout<<"Inside Base gun \n";
        }

        virtual void sun()
        {
            cout<<"Inside Base sun \n";
        }
};  //8 bytes

class Derived : public Base
{
    public :
        int x, y;

        void fun()                              //Redefinition
        {
            cout<<"Inside Derived fun \n";
        }

        void sun()                              //Redefinition
        {
            cout<<"Inside Derived sun \n";
        }

        virtual void run()                              //Definition
        {
            cout<<"Inside Derived run \n";
        }
};  //16 bytes

int main()
{
    cout<<sizeof(Base)<<"\n";       //12
    cout<<sizeof(Derived)<<"\n";    //20

    return 0;
}