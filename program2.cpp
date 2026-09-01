#include<iostream>
#include<string>
using namespace std;
class Student 
{
    public:
    string Name;
    int Marks;
    int Roll_Number;
};
int main()
{
    Student S1,S2;
    S1.Name="Arya";
    S1.Marks=100;
    S1.Roll_Number=26;

    S2.Name="Vedant";
    S2.Marks=99;
    S2.Roll_Number=24;

    cout<<S1.Name<<" "<<S1.Marks<<" "<<S1.Roll_Number<<endl;
    cout<<S2.Name<<" "<<S2.Marks<<" "<<S2.Roll_Number<<endl;

    return 0;



}