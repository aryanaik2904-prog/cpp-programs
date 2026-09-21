#include<iostream>
using namespace std;

class Rectangle
{
    private:
    float length, breadth;
    public:
    void getData();
    float area();
    float perimeter();
    void display();

};
void Rectangle::getData()
{
    cout<<"Enter length:";
    cin>>length;
    cout<<"Enter breadth:";
    cin>>breadth;

}
float Rectangle::area()
{
    return length * breadth;
}
float Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

void Rectangle::display()
{
    cout<<"Area of Rectangle = "<<area()<<endl;
    cout<<"Perimeter of Rectangle = "<<perimeter()<<endl;
}
int main()
{
    Rectangle r;
    
    r.getData();
    r.display();

    return 0;

}