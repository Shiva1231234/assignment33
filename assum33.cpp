Q=2
/*

// Example: define member function without argument within the class
 
#include<iostream>
using namespace std;
 
class Person
{
    int id;
    char name[100];
   
    public:
        void set_p()
        {
            cout<<"Enter the Id:";
            cin>>id;
            fflush(stdin);
            cout<<"Enter the Name:";
            cin.get(name,100);
        }
   
        void display_p()
        {
            cout<<endl<<id<<"\t"<<name<<"\t";
        }
};
 
class Student: private Person
{
    char course[50];
    int fee;
     
    public:
    void set_s()
        {
            set_p();
            cout<<"Enter the Course Name:";
            fflush(stdin);
            cin.getline(course,50);
            cout<<"Enter the Course Fee:";
            cin>>fee;
        }
         
        void display_s()
        {
            display_p();
            cout<<course<<"\t"<<fee<<endl;
        }
};
 
main()
{
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}*/
Q=3
/*
        #include<iostream.h>
#include<conio.h>

class student {
protected:
    int rno, m1, m2;
public:

    void get() {
        cout << "Enter the Roll no :";
        cin>>rno;
        cout << "Enter the two marks   :";
        cin >> m1>>m2;
    }
};

class sports {
protected:
    int sm; // sm = Sports mark
public:

    void getsm() {
        cout << "\nEnter the sports mark :";
        cin>>sm;

    }
};

class statement : public student, public sports {
    int tot, avg;
public:

    void display() {
        tot = (m1 + m2 + sm);
        avg = tot / 3;
        cout << "\n\n\tRoll No    : " << rno << "\n\tTotal      : " << tot;
        cout << "\n\tAverage    : " << avg;
    }
};

void main() {
    clrscr();
    statement obj;
    obj.get();
    obj.getsm();
    obj.display();
    getch();
}
*\
Q=4
/*
 #include<iostream>
 using namespace std;
 class Employee
 {
     private:
         int empid;
         char empname[20];
         int bsalary;
         int allowance;
     public:
         Employee()
         {
             bsalary = 1000;
         }
         void GetData();
         void DispData();
 };
 void Employee::GetData()
 {
     cout<<"Enter the employee id: ";
     cin>>empid;
     cout<<"Enter the employee name: ";
     cin>>empname;
     cout<<"Enter the employee allowace: ";
     cin>>allowance;
 }
 void Employee::DispData()
 {
     cout<<endl<<empid<<"\t"<<empname<<"\t"<<bsalary<<"\t"<<allowance;
 }
 int main()
 {
     Employee e[3];
     cout<<"Enter the employee information:"<<endl;
     for(int i=0;i<3;i++)
     {
         e[i].GetData();
     }
     cout<<endl<<"The employee information is:";
     cout<<endl<<"EmpID \t Name \t Bsalary \t Allowance";
     for(int i=0; i<3;i++)
     {
         e[i].DispData();
     }
 }
*\
Q=5
/*
#include<iostream>

using namespace std;
int main()
{
   float amount, discount, topaid;
   cout<<"Enter Total Amount: ";
   cin>>amount;
   if(amount<=100)
      cout<<"Amount to be Paid: "<<amount;
   else
   {
      if(amount>100 && amount<=200)
      {
         discount = (amount*5)/100;
         topaid = amount-discount;
      }
      else if(amount>200 && amount<=400)
      {
         discount = (amount*10)/100;
         topaid = amount-discount;
      }
      else if(amount>400 && amount<=800)
      {
         discount = (amount*20)/100;
         topaid = amount-discount;
      }
      else
      {
         discount = (amount*25)/100;
         topaid = amount-discount;
      }
      cout<<"Amount to be Paid: "<<topaid;
   }
   cout<<endl;
   return 0;
}
*\
Q=6
/*

// C++ Program to swap two numbers using friend function
#include <iostream>
 
using namespace std;
 
class Swap {
 
    // Declare the variables of Swap Class
    int temp, a, b;
 
public:
 
    // Define the parameterized constructor, for inputs
    Swap(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
 
    // Declare the friend function to swap, take arguments
    // as call by reference
    friend void swap(Swap&);
};
 
// Define the swap function outside class scope
void swap(Swap& s1)
{
    // Call by reference is used to passed object copy to
    // the function
    cout << "\nBefore Swapping: " << s1.a << " " << s1.b;
 
    // Swap operations with Swap Class variables
    s1.temp = s1.a;
    s1.a = s1.b;
    s1.b = s1.temp;
    cout << "\nAfter Swapping: " << s1.a << " " << s1.b;
}
 
// Driver Code
int main()
{
    // Declare and Initialize the Swap object
    Swap s(4, 6);
    swap(s);
    return 0;
}
*\
Q=7
/*
#include <iostream>    // using IO functions
#include <string>      // using string
using namespace std;
 
class Circle {
private:
   double radius;      // Data member (Variable)
   string color;       // Data member (Variable)
 
public:
   // Constructor with default values for data members
   Circle(double r = 1.0, string c = "red") {
      radius = r;
      color = c;
   }
 
   double getRadius() {  // Member function (Getter)
      return radius;
   }
 
   string getColor() {   // Member function (Getter)
      return color;
   }
 
   double getArea() {    // Member function
      return radius*radius*3.1416;
   }
};   // need to end the class declaration with a semi-colon
 
// Test driver function
int main() {
   // Construct a Circle instance
   Circle c1(1.2, "blue");
   cout << "Radius=" << c1.getRadius() << " Area=" << c1.getArea()
        << " Color=" << c1.getColor() << endl;
 
   // Construct another Circle instance
   Circle c2(3.4); // default color
   cout << "Radius=" << c2.getRadius() << " Area=" << c2.getArea()
        << " Color=" << c2.getColor() << endl;
 
   // Construct a Circle instance using default no-arg constructor
   Circle c3;      // default radius and color
   cout << "Radius=" << c3.getRadius() << " Area=" << c3.getArea()
        << " Color=" << c3.getColor() << endl;
   return 0;
}
*\
Q=8
/*
#include<iostream.h>
#include<conio.h>
class customer
{
char name[20];
char pno[10];
public:
void get()
{
cout<<“\nEnter the Name & Phone no.\n”;
cin>>name>>pno;
}
void disp_c()
{
cout<<name<<“\t”<<pno<<“\t\t”;
}
};
class depositor:public customer
{

int accno;
float bal;
public:
void get_d()
{
cout<<“\nEnter the A/c no. & Balance: \n”;
cin>>accno>>bal;
}
void disp_d()
{
cout<<“\t”<<accno<<“\t”<<“\t\t”<<bal<<endl;
}
};
class borrower:public depositor
{
int lno;
float lamt;
public:
void get_b()
{
get();
get_d();
cout<<“\nEnter the loan no. & loan amount: \n”;
cin>>lno>>lamt;
}
void display()
{
disp_c();
disp_d();
cout<<“\t”<<lno<<“\t\t”<<lamt<<endl;
}
};
void main()
{
int n,i;
borrower b[10];
clrscr();
cout<<“\nHow many customer: \n”;
cin>>n;
for(i=0;i<n;i++)
{
b[i].get_b();
}
cout<<“\nThe Detail’s of Customer’s: \n”;
cout<<“Name\tPNo.\tA/C no.\t\tBalance\t\tLoan no.\tLoan amt\n”;
cout<<“============================================\n”;
for(i=0;i<n;i++)
{
b[i].display();
}
getch();
}

*\
Q=9
/*
 
#include <iostream>
using namespace std;
 
#define MAX 10
 
class student
{
    private:
        char  name[30];
        int   rollNo;
        int   total;
        float perc;
    public:
        //member function to get student's details
        void getDetails(void);
        //member function to print student's details
        void putDetails(void);
};
 
//member function definition, outside of the class
void student::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks outof 500: ";
    cin >> total;
     
    perc=(float)total/500*100;
}
 
//member function definition, outside of the class
void student::putDetails(void){
    cout << "Student details:\n";
    cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total << ",Percentage:" << perc;
}
 
int main()
{
    student std[MAX];       //array of objects creation
    int n,loop;
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(loop=0;loop< n; loop++){
        cout << "Enter details of student " << loop+1 << ":\n";
        std[loop].getDetails();
    }
     
    cout << endl;
     
    for(loop=0;loop< n; loop++){
        cout << "Details of student " << (loop+1) << ":\n";
        std[loop].putDetails();
    }
     
    return 0;
}
*\
Q=10

