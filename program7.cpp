#include<iostream>
using namespace std;

class Student
{
    private:
        int rollNo;
        string name;

        static int count;

    public:
        Student(int r, string n)
        {
            rollNo = r;
            name = n;
            count++;

        }
        static void showCount()
        {
            cout<<"Total Students:"<<count<<endl;
        }
};
int Student::count = 0;

class ClassB;

class ClassA
{
    private:
        int valueA;
    public:
        ClassA(int a)
        {
            valueA = a;

        }
        friend void compare(ClassA, ClassB);
};
class ClassB
{
    private:
        int valueB;
    public:
        ClassB(int b)
        {
            valueB = b;

        }
        friend void compare(ClassA, ClassB);
};
void compare(ClassA a, ClassB b)
{
    if(a.valueA > b.valueB)
      cout<<"Class A has greater value."<<endl;
    else if(a.valueA < b.valueB)
      cout<<"Class B has greater value."<<endl;
    else
      cout<<"Both values are equal."<<endl;
}

class Box
{
    private:
      int length;

    public:
      Box(int l)
      {
        length = 1;
      }
      friend class Display;

};
class Display
{
    public:
      void show(Box b)
      {
        cout<<"Box Length:"<<b.length<<endl;
      }
};
int main()
{
    Student s1(1, "Arya");
    Student s2(2, "Vinod");

    Student::showCount();

    ClassA a(50);
    ClassB b(40);

    compare(a, b);
    
    Box box(100);
    Display d;

    d.show(box);

    return 0;

}
