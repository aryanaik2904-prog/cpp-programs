#include<iostream>
using namespace std;
void PrintHello();
void Bye();
int main()
{
    PrintHello();
    PrintHello();
    Bye();
    PrintHello();
    return 0;

}
void PrintHello()
{
    cout<<"Hello SOC 13."<<endl;

}
void Bye()
{
    cout<<"Bye SOC 13."<<endl;
    PrintHello();
    
}