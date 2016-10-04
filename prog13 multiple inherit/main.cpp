/*Create employee bio-data using following classes i) Personal record ii))Professional record iii)
Academic record Assume appropriate data members and member function to accept required
data & print bio-data. Create bio-data using multiple inheritance using C++.*/

#include<iostream>
using namespace std;

class Personal
{
	protected:
		char name[15];
		int age;
	
	public:
		void getdata();
		void putdata();
};

void Personal::getdata()
{
	cout<<"\nEnter your name:";
	cin>>name;
	cout<<"\nEnter your age:";
	cin>>age;
}

void Personal::putdata()
{
	cout<<"\nYour Name is: "<<name;
	cout<<"\nYour Age is: "<<age;
}

class Academic:virtual public Personal
{
	protected:
		char school[30];
		int marks;
	
	public:
		void getdata();
		void putdata();
};

void Academic::getdata()
{
	cout<<"\nEnter your School name:";
	cin>>school;
	cout<<"\nEnter your marks:";
	cin>>marks;
}

void Academic::putdata()
{
	cout<<"\nYour School Name is: "<<school;
	cout<<"\nYour Marks are: "<<marks;
}

class Professional:virtual public Personal
{
	protected:
		char degree[10];
		int mrks;
	
	public:
		void getdata();
		void putdata();
};

void Professional::getdata()
{
	cout<<"\nEnter your degree:";
	cin>>degree;
	cout<<"\nEnter your marks:";
	cin>>mrks;
}

void Professional::putdata()
{
	cout<<"\nYour Degree is: "<<degree;
	cout<<"\nYour Marks are: "<<mrks;
}

class Student:public Academic,public Professional
{
	public:
		void accept();
		void display();
		void update();
};

void Student::accept()
{
	Personal::getdata();
	Academic::getdata();
	Professional::getdata();
}

void Student::display()
{
	Personal::putdata();
	Academic::putdata();
	Professional::putdata();
}

void Student::update()
{
	int op;
	cout<<"Enter your choice";
	cout<<"\n1.Modify your name \n2.Modify your age \n3.Modify your School name \n4.Modify your academic marks \n5.Modify your degree \n6.Modify your degree marks ";
	cin>>op;
	switch(op)
	{
		case 1:
			cin>>name;
			break;

		case 2:
			cin>>age;
			break;

		case 3:
			cin>>school;
			break;

		case 4:
			cin>>marks;
			break;

		case 5:
			cin>>degree;
			break;

		case 6:
			cin>>mrks;
			break;
	}
}

int main()
{
	Student s[10];
	int i,ch;
	int j=-1;
	while(1)
	{
	cout<<"\n1.Build Master Table \n2.Display \n3.Insert \n4.Delete \n5.Update \n6.Exit";
	cin>>ch;

switch(ch)
{

	case 1:
		{
			char c;
			do
			{	
				j++;            //to make j=0
				s[j].accept();
				cout<<"Do you want to add more records?";
				cin>>c;
			}
			while(c=='Y');
			break;
		}

	case 2:
		{
			for(i=0;i<=j;i++)
			{
				s[i].display();
			}
			break;
		}

	case 3:
		{
			int no;
			cout<<"Enter the position where you want to insert";
			cin>>no;
			if(no>=0 && no<=j)
			{
				for(i=j;i>=no;i--)
				{
					s[i+1]=s[i];
					s[no].accept();
					j++;
				}
			}
			else
			cout<<"Wrong Index";
			break;
		}

	case 4:
		{
			int no;
			cout<<"Enter the position from where you want to delete the record";
			cin>>no;
			if(no>=0 && no<=j)
			{
				for(i=no;i<=j;i++)
				{
					s[i]=s[i+1];
					j--;
				}
			}
			else
			cout<<"Wrong Index";
			break;
		}

	case 5:
		{
			int no;
			cout<<"Enter the index no. where you want to update the records";
			cin>>no;

				if(no>=0 && no<=j)
					s[no].update();
				else
					cout<<"Wrong Index";
			break;
		}
}
}
}

