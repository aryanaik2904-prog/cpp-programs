#include<iostream>
using namespace std;

class Employee
{
  private:
   int id;
   string name;
   float salary;
   float bonus;

  public:
   Employee()
   {
     id = 0;
     name = "unknown";
     salary = 0;
     bonus = 0;
   }

   Employee(int i, string n, float s, float b)
   {
     id = i;
     name = n;
     salary = s;
     bonus = b;
   }

   void display()
   {
     cout<<"Employee ID:"<<id<<endl;
     cout<<"Employee Name:"<<name<<endl;
     cout<<"Basic Salary:"<<salary<<endl;
     cout<<"Bonus:"<<bonus<<endl;
     cout<<"Total Salary:"<<salary+bonus<<endl;

   }
};
int main()
{
  Employee e1;
  Employee e2(101, "Arya" , 30000, 5000);

  cout<<"Default Constructor:"<<endl;
  e1.display();

  cout<<"\nParameterized Constructor:"<<endl;
  e2.display();

  return 0;
  
}
