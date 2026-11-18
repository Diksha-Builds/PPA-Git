#include<iostream>
namespace Marvellous
{
    int no = 11;
    void fun()
    {
        std::cout<<"Marvellous";
    }
}

using namespace Marvellous;
int main()
{
    std::cout<<"Jay Ganesh...\n";

    fun();  //Error

    return 0;
}