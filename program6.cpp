#include<iostream>
using namespace std;

class Book
{
  private:
   int bookId;
   string title;
   float price;

  public:
   Book(int id, string t, float p)
   { 
      bookId = id;
      title = t;
      price = p;

   }

   ~Book()
   {
      cout<<"Destructor called for"<<title<<endl;
   }
   void display()
   {
      cout<<"Book Id: "<<bookId<<endl;
      cout<<"Title: "<<title<<endl;
      cout<<"Price: "<<price<<endl;

   }
};
int main()
{
    Book b1(101,"C++ Programming" , 500);
    Book b2 = b1;

    cout<<"Original Book Details:"<<endl;
    b1.display();

    cout<<"\nCopied Book Details:"<<endl;
    b2.display();

    return 0;
    
}