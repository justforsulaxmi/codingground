/*Develop an object oriented program in C++ to create a database of student information
system containing the following information: Name, Roll number, Class, division, Date of
Birth, Blood group, Contact address, telephone number, driving license no. etc Construct the
database with suitable member functions for initializing and destroying the data viz
constructor, default constructor, Copy constructor, destructor, static member functions, friend
class, this pointer, inline code and dynamic memory allocation operators-new and delete.*/

#include<iostream>
#include<string.h>
using namespace std;

class person
{

	int roll,dob,telephone,license;
	char name[20],Class[20],BG[20],address[20],div[20];
	static int test;

	public:
		person *head=NULL;
		person *next=NULL;
		inline void getdata();					//inline function
		void createdb();
		void displaydb();

		static void showtest()					//Static Member Function
		{
			cout<<"\nThis is Static Member function ";
		}


		person()						//default constructor
		{
			strcpy(name,"Aishwarya");
			strcpy(Class,"SE");
			strcpy(BG,"B");
			strcpy(address,"Pune");
			strcpy(div,"A");
			
			roll=0;
			dob=0;
			telephone=0;
			license=0;
		}

		person(person &p)					//copy constructor
		{
			strcpy(this->name,p.name);
			strcpy(this->Class,p.Class);
			strcpy(this->BG,p.BG);
			strcpy(this->address,p.address);		
			strcpy(this->div,p.div);
									//this pointer
			this->roll=p.roll;
			this->dob=p.dob;
			this->telephone=p.telephone;
			this->license=p.license;
		}

		~person()						//destructor
		{
			cout<<"\nObject is deleted...";
		}

friend class info;							//friend function

};


class info
{
	public:
		void getinfo(person *p);
};


void person::getdata()
{
	cout<<"\nEnter your name";
	cin>>name;
	cout<<"\nEnter your Roll no.";
	cin>>roll;
	cout<<"\nEnter your Class";
	cin>>Class;
	cout<<"\nEnter your Division";
	cin>>div;
	cout<<"\nEnter your contact no.";
	cin>>telephone;
	
}

void info::getinfo(person *p)
{
	cout<<"\nEnter your address";
	cin>>p->address;
	cout<<"\nEnter your date of birth";
	cin>>p->dob;
	cout<<"\nEnter your blood group:";
	cin>>p->BG;
	cout<<"\nEnter your driving license number";
	cin>>p->license;
}

void person::createdb()
{ 
	person *p = new person();					//Dynamic memory allocation
	p->getdata();
	info p1;
	p1.getinfo(p);
	p->next = NULL;

	if(head == NULL)
	{
		head = p;
	}
	else
	{
		person *temp;
		temp = head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next = p;
	}
delete p;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
}

void person::displaydb()
{
	person *temp;
	temp = head;
	if(temp == NULL)
	{
		cout<<"\nNo data to display";
	}
	else
	{
		while(temp!=NULL)
		{
			cout<<"\n******************\n";
			cout<<"\nYour name is: "<<temp->name;
			cout<<"\nYour Roll Number is: "<<temp->roll;
			cout<<"\nYour Class is: "<<temp->Class;
			cout<<"\nYour Division is: "<<temp->div;
			cout<<"\nYour Contact number is: "<<temp->telephone;
			cout<<"\nYour Address is: "<<temp->address;
			cout<<"\nYour Date of birth is: "<<temp->dob;
			cout<<"\nYour Blood Group is: "<<temp->BG;
			cout<<"\nYour Driving license number is: \n"<<temp->license;
			temp = temp->next;
			cout<<"\n******************\n";
			
		}
	}
}
	

int main()
{
	person p;
	person::showtest();					//Static member function is called

	int ch;
	char s;
	
	do
	{
		cout<<"\nEnter your choice: ";
		cout<<"\n1.Create DataBase";
		cout<<"\n2.Display DataBase";
		cin>>ch;
		
		switch(ch)
		{
			case 1: p.createdb();
				break;
			
			case 2: p.displaydb();
				break;
		}
		
		cout<<"\nDo you want to continue? Press 'y' or 'n'";
		cin>>s;
	}
	while(s == 'y');
}


	 
			
		
	                                                                                                                                               