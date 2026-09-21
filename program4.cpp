#include<iostream>
using namespace std;

class Product
{
    private:
    int productId;
    string productName;
    float price;
    int monthlySales[12];

    public:
    void getData()
    {

    cout<<"Enter Product ID:";
    cin>>productId;
    cout<<"Enter Product Name:";
    cin>>productName;
    cout<<"Enter Price:";
    cin>>price;
    cout<<"Enter Monthly Sales for 12 months:"<<endl;

    for(int i=0;i<12;i++)
    {
        cout<<"Month"<<i+1<<":";
        cin>>monthlySales[i];
    
    }
}

int totalQuantity()
{
    int total=0;
    for(int i=0;i<12;i++)
    {
        total+=monthlySales[i];
    }
    return total;
}
float totalBill()
{
    return totalQuantity()*price;
}
void display()
{
    cout<<"\nProduct ID:"<<productId;
    cout<<"\nProduct Name:"<<productName;
    cout<<"\nPrice:"<<price;
    cout<<"\nTotal Quantity Sold:"<<totalQuantity();
    cout<<"\nTotal Bill:"<<totalBill()<<endl;
}
};

int main()
{
    int n;
    
    cout<<"Enter number of products:";
    cin>>n;

    Product p[10];

    for (int i = 0; i < n; i++)

    {
        cout<<"\nEnter details of Product"<< i + 1 <<":\n";
        p[i].getData();
    }

    cout<<"\n-----PRODUCT DETAILS-----\n";
    for(int i = 0; i < n; i++)
    {
        p[i].display();
    }
    return 0;

}