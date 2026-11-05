#include<iostream>
using namespace std;

class Demo
{
    public :
        int i;      //Characteristic
        float f;    //Characteristic

        void fun()  //Behavior
        {
            cout<<"Inside fun\n";
        }
};

int main()
{
    Demo dobj;
    
    cout<<dobj.i<<"\n";

    dobj.fun();

    return 0;
}