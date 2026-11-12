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
            cout<<"Inside Base Destructor \n";
        }

        void fun()
        {
            cout<<"Inside base fun \n";
        }
};

class Derived : public Base
{
    public :
        int x;

        Derived()
        {
            cout<<"Inside Derived Constructor \n";
            x = 0;
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor \n";
        }

        void gun()
        {
            cout<<"Inside Derived gun \n";
        }
};

class DerivedX : public Derived
{
    public :
        int y;
        
        DerivedX()
        {
            cout<<"Inside DerivedX Constructor \n";
            y = 0;
        }

        ~DerivedX()
        {
            cout<<"Inside DerivedX Destructor \n";
        }

        void sun()
        {
            cout<<"Inside derivedX sun \n";
        }
};

int main()
{
    cout<<"Inside main \n";

    cout<<"Size of Base class object : "<<sizeof(Base)<<"\n";           //8
    cout<<"Size of Derived class object : "<<sizeof(Derived)<<"\n";     //12
    cout<<"Size of DerivedX class object : "<<sizeof(DerivedX)<<"\n";   //16

    DerivedX dobj;

    cout<<dobj.i<<"\n";     //0
    cout<<dobj.j<<"\n";     //0
    cout<<dobj.x<<"\n";     //0
    cout<<dobj.y<<"\n";     //0

    dobj.fun();
    dobj.gun();
    dobj.sun();

    cout<<"End of main \n";

    return 0;
}