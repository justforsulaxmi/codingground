/*Create a class template to represent a generic vector. Include following member functions:
1. To create the vector.
2. To modify the value of a given element
3. To multiply by a scalar value
4. To display the vector in the form (10,20,30,...)*/

#include<iostream>
#include<stdlib.h>
using namespace std;
template<class T>

class vector
{
	T a[10];
	int  i,size;
	public:
	void create();
	void display();
	void modify();
	void mul();
	vector();
};
template<class T>
vector<T>::vector()
{
	size=0;
}
template<class T>
void vector<T>::create()
{	char h;
	do
	{
	cout<<"\nEnter the Elements:";
	cin>>a[size];
	size++;
	cout<<"want to enter more elements press y:\n";
	cin>>h;
	}while(h=='y');

}
template<class T>
void vector<T>::display()
{
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<"\n";
	}
}
template<class T>
void vector<T>::modify()
{	cout<<"\nEnter index where change has to be done:\n";
		
		cin>>i;
		if(i>=0&&i<size)
		{
		cout<<"\nEnter New Value:";
		cin>>a[i];
		}
		else
		cout<<"wrong index entered:\n";
		

}
template<class T>
void vector<T>::mul()
{	T k;
	cout<<"\nEnter the no by which array has to be multiplied:\n";
	cin>>k;
	for(i=0;i<size;i++)
	{
		a[i]=a[i]*k;
	}
	cout<<"\nResult is as follows\n";
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<"\n";
	}
	
		
	
}
int main()
{
	int ch,c;
	char d;
	while(1)
	{	
	cout<<"\n1.int\n2:float\n";
	cout<<"\nEnter Your Choice:";
	cin>>ch;	
	switch (ch)
	{
		case 1:
		{
			vector<int>a;
			do
			{
				cout<<"1:create\n2:display\n3:modify\n4multiply\n";
				cin>>c;
				switch(c)
				{
					case 1:a.create();
					break;
					case 2:a.display();
					break;
					case 3:a.modify();
					break;
					case 4:a.mul();
					break;
				}
			
			cout<<"if you wants to continue press k:\n";
			cin>>d;
			}
			while(d=='k');
			break;
		}

					
		case 2:
		{
			vector<float>a;
			do
			{
				cout<<"1:create\n2:display\n3:modify\n:4multiply\n";
				cin>>c;
				switch(c)
				{
					case 1:a.create();
					break;
					case 2:a.display();
					break;
					case 3:a.modify();
					break;
					case 4:a.mul();
					break;
				}
			
			cout<<"if you wants to continue press k:\n";
			cin>>d;
			}
			while(d=='k');
			break;
		}
		case 3:
		exit(0);
}
}
	
return 0;
}

