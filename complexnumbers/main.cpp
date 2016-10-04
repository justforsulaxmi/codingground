/*Implement a class Complex which represents the Complex Number data type. Implement the
following operations:
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to print and read Complex Numbers.*/

#include<iostream>
using namespace std;
 class complex  
 {  
 int a,b;  
 public:  
 void read()  
 {  
 cout<<"\n\nEnter the REAL PART : ";  
 cin>>a;  
 cout<<"\n\nEnter the IMAGINARY PART : ";  
 cin>>b;  
 }  
 complex operator +(complex c2)  
 {  
 complex c3;  
 c3.a=a+c2.a;  
 c3.b=b+c2.b;  
 return c3;  
 }  
 complex operator -(complex c2)  
 {  
 complex c3;  
 c3.a=a-c2.a;  
 c3.b=b-c2.b;  
 return c3;  
 }  
 complex operator *(complex c2)  
 {  
 complex c3;  
 c3.a=(a*c2.a)-(b*c2.b);  
 c3.b=(b*c2.a)+(a*c2.b);  
 return c3;  
 }  
 complex operator /(complex c2)  
 {  
 complex c3;  
 c3.a=((a*c2.a)+(b*c2.b))/((c2.a*c2.a)+(c2.b*c2.b));  
 c3.b=((b*c2.a)-(a*c2.b))/((c2.a*c2.a)+(c2.b*c2.b));  
 return c3;  
 }  
 void display()  
 {  
 cout<<a<<"+"<<b<<"i";  
 }  
 };  
 int main()  
 {  
 complex c1,c2,c3;  
 int ch;
 char h;  
 do  
 {    
 cout<<"\t\tCOMPLEX NUMBERS\n\n1.ADDITION\n\n2.SUBTRACTION\n\n3.MULTIPLICATION\n\n4.DIVISION";  
 cout<<"\n\nEnter your choice : ";  
 cin>>ch;  
 if(ch==1||ch==2||ch==3||ch==4)  
 {  
 cout<<"\n\nEnter the First Complex Number";  
 c1.read();  
 cout<<"\n\nEnter the Second Complex Number";  
 c2.read();  
 }  
 switch(ch)  
 {  
 case 1     : c3=c1+c2;  
            cout<<"\n\nSUM = ";  
            c3.display();  
            break;  
 case 2     : c3=c1-c2;  
            cout<<"\n\nResult = ";  
            c3.display();  
            break;  
 case 3 : c3=c1*c2;  
            cout<<"\n\nPRODUCT = ";  
            c3.display();  
            break;  
 case 4     : c3=c1/c2;  
            cout<<"\n\nQOUTIENT = ";  
            c3.display();  
            break;  
 default     : cout<<"\n\nUndefined Choice";  
 }  
 cout<<"\n\nDo You Want to Continue?";  
 cin>>h;  
 }while(h=='y');  
 return 0;
 } 