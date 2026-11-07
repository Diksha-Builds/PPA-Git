#include<iostream>
using namespace std;

class Demo
{
    public :
        int i;      //Characteristic
        float f;    //Characteristic

        Demo()      //constructor
        {
            cout<<"Inside Constructor\n";
            i = 0;
            f = 0.0f;
        }

        ~Demo()     //Destructor
        {
            cout<<"Inside destructor\n";
        }

        void fun()  //Behavior
        {
            cout<<"Inside fun\n";
        }
};

int main()
{
    cout<<"Inside Main"<<"\n";

    Demo dobj;      //object creation
    
    cout<<"\n"<<dobj.i<<"\n";

    dobj.fun();

    cout<<"End of main"<<"\n";

    return 0;
}