#include<iostream>
using namespace std;

class Rectangle
{
           private:
           float l,b;
           public:


void accept()
{
          cout<<"Enter the length:";
          cin>>l;
 
          cout<<"Enter the breadth:";
          cin>>b;
}


float area();
float perimeter();

void display()
{
          cout<<"area of the rectangle is:"<<area()<<endl;
          cout<<"perimeter of the rectangle is:"<<perimeter()<<endl;
}
};

float Rectangle:: area()
{
return (l*b);
}
float Rectangle:: perimeter()
{
return 2*(l+b);
}
int main()
{
Rectangle r;
r.accept();
r.display();
return 0;
}
