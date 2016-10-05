/*Crete User defined exception to check the following conditions and throw the exception if the criterion does not meet. 
a.	User has age between 18 and 55 
b.	User stays has income between Rs. 50,000 – Rs. 1,00,000 per month 
c.	User stays in Pune/ Mumbai/ Bangalore / Chennai 
d.	User has 4-wheeler  
Accept age, Income, City, Vehicle from the user and check for the conditions mentioned above. If any of the condition not met then throw the exception.
*/


#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class user
{
	int age,income;
	char city[20],vehicle[20];
	
public:
	friend istream& operator>>(istream &in,user &u)
	{
		try
		{
		cout<<"\nEnter your age:";
		in>>u.age;
		if(u.age<18 || u.age>55)
				throw(1);
		cout<<"\nEnter the city name:";
		in>>u.city;
		if((strcmp(u.city,"Pune")!=0) &&(strcmp(u.city,"Mumbai")!=0) &&(strcmp(u.city,"Banglore")!=0) &&(strcmp(u.city,"Chennai")!=0))
				throw(2);
		cout<<"\nEnter if you have a fourwheeler or a two wheeler:";
		in>>u.vehicle;
		if(strcmp(u.vehicle,"fourwheeler")!=0)
				throw(3);
		cout<<"\nEnter your income:";
		in>>u.income;
		if(u.income<50000 || u.income>100000)
				throw(4);
		}
	
		catch(int i)
		{
			if(i==1)
				cout<<"\nWrong age.";
			if(i==2)
				cout<<"\nWrong city.";
			if(i==3)
				cout<<"\nUser doesn't have a fourwheeler";
			if(i==4)
				cout<<"\nWrong entry.";
		u.age=0;
		u.income=0;
		strcpy(u.city,"0");
		strcpy(u.vehicle,"0");
		}
	
		return in;
	}

	friend ostream& operator<<(ostream &print,user &u)
	{
		print<<"\nYour age is:"<<u.age;
		print<<"\nYour city is:"<<u.city;
		print<<"\nYou have a:"<<u.vehicle;
		print<<"\nyour income is:"<<u.income;

		return print;
	}
	
};
	
int main()
{
	int ch,n,i;
	char c;
	cout<<"\nEnter the number of users:";
	cin>>n;
	//user u;
	user *u=new user[n];
		
		do
		{
		cout<<"\n1.Getdata\n2.Display\n3.Exit";
		cout<<"\nEnter your choice:";
		cin>>ch;
	

		switch(ch)
				{
					case 1:
						{
							for(i=0;i<n;i++)
							cin>>u[i];

							break;
						}
				
					case 2:	
						{
							for(i=0;i<n;i++)
							cout<<u[i]<<"\n";
							break;
						}
					case 3:
						{
							exit(0);
							default:
								cout<<":\nWrong choice.";
						}

				}

		
	cout<<"\nDo you want to continue?('y','n'):";
	cin>>c;
		}
			while(c=='y');
	
delete u;
}
		