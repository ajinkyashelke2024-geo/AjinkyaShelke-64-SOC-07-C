#include<iostream>
using namespace std;

class student
{
                public:
                int rollno;
                string name;
                float marks;

void getdata()
{
                cout<<"Enter the name of the student:"<<endl;
                cin.ignore();
                getline(cin,name);

                cout<<"Enter your roll no:"<<endl;
                cin>>rollno;

                cout<<"Enter the marks:"<<endl;
                cin>>marks;
}


void calculateresult()
{
               if(marks>=50)
               cout<<"The result is pass"<<endl;
               else
               cout<<"Sorry but The result is fail"<<endl;
}

void display()
{
              cout<<"The name of the student is:"<<name<<endl;
              cout<<"The rollno of the student is:"<<rollno<<endl;
              cout<<"The marks of the student are:"<<marks<<endl;

calculateresult();
}
};

int main()
{
              student s;
              s.getdata();
              s.display();
return 0;
}
