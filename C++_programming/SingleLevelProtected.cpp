#include<iostream>
using namespace std;

class Base
{
    protected :
        int i, j;

    public :    
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

int main()
{
    cout<<"Inside main \n";

    cout<<"Size of Base class object : "<<sizeof(Base)<<"\n";           //8
    cout<<"Size of Derived class object : "<<sizeof(Derived)<<"\n";     //12

    Derived dobj;

    //cout<<dobj.i<<"\n";     //Error
    //cout<<dobj.j<<"\n";     //Error
    cout<<dobj.x<<"\n";     //0

    cout<<"End of main \n";

    return 0;
}