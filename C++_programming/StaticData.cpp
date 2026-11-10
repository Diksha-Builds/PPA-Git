#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;              //Non-static
        int j;              //Non-static
        static int k;       //Static
};

int main()
{
    Demo dobj;

    cout<<sizeof(dobj);

    return 0;
}