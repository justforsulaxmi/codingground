/*Write a C++ program that creates an output file, writes information to it, closes the file and
open it again as an input file and read the information from the file.*/

#include<iostream>
#include<fstream>
using namespace std;

class student
{
 int age;
 char name[20],filename[20];
  public:
 void accept()
	{
		cout<<"\n\tplease enter your age:";
		cin>>age;
		cout<<"\n\tplease enter your name:";
		cin>>name;
		
	}

  void display()
	{
		cout<<"\n\tyour age is:"<<age;
		cout<<"\n\tyour name is:"<<name;
		
	}
};

int main()
{
	int i;
	char h,p,k[10];
	int ch;
	student s;
	fstream f;
	cout<<"enter the filemname";
	cin>>k;


	do 
	 {
	cout<<"\n1.Create data \n2.Display \n3.Insert\n";
	cin>>ch;
		
	switch(ch)
	{
		case 1:
                 { 	 f.open(k,ios::out|ios::trunc);
			do
			{
			  
			   s.accept();
			  f.write((char *)&s,sizeof(s));
			  
				cout<<" \n\nDo you want to return to continue (y/n) ";
          			cin>>h;
			}while(h== 'y');
		   f.close();
                   break;
                 }

		case 2:
                  {
			f.open(k,ios::in);
			f.seekg(0);
			while(f.read((char *)&s,sizeof(s)))
			{
				s.display();
			}
		     f.close();
                     break;
                  }

		case 3:
		  {
			s.accept();
			f.open(k,ios::app|ios::out);
			
			f.write((char *)&s,sizeof(s));
		     f.close();
                     break;
		  }

		default:
			cout<<"\n wrong choice"; 
	}
			cout<<" \n\nDo you want to return to continue (y/n) ";
          			cin>>p;

	  }  while(p== 'y');
	
return 0;		
	
}

