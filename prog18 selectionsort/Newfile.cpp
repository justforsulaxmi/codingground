#include<iostream>
using namespace std;

template <class T>
class sort
{
	T  a[10];
	int n;
	public:
		void getdata()
		{
			cout<<"Enter the number of elements";
			cin>>n;
			cout<<"Enter the elements you want to sort";
			for(int i=0;i<n;i++)
			cin>>a[i];
		}

		void sorting()
		{
			T temp;
			int pos,min;
			for(int i=0;i<n-1;i++)
			{
				min=a[i];
				pos=i;

				for(int j=i+1;j<n;j++)
				{
					if(min>a[j])
					{
						min=a[j];
						pos=j;
					}
				}
		
			temp=a[i];
			a[i]=a[pos];
			a[pos]=temp;
			}
		}

		void display()
		{

			cout<<"\nSorted list is as follows\n";
    
			for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		}

};

int main()
{
	int ch,c;
	char d;
	cout<<"\nSelect the option : \n1.Using int \n2.Using Float \n.3 Using char ";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			{
				sort<int>a;
				do
					{
						cout<<"\n1.Getdata \n2.Sort the data \n3.Display";
						cin>>c;
					switch(c)
					{
						case 1:a.getdata();
							break;
						case 2:a.sorting();
							break;
						case 3:a.display();
							break;
					}
						cout<<"Do you want to continue? Press 'Y' or 'N' ";
						cin>>d;
					}
				while(d=='Y');
				break;
			}

		case 2:
			{
				sort<float>a;
				do
					{
						cout<<"\n1.Getdata \n2.Sort the data \n3.Display";
						cin>>c;
					switch(c)
					{
						case 1:a.getdata();
							break;
						case 2:a.sorting();
							break;
						case 3:a.display();
							break;
					}
						cout<<"Do you want to continue? Press 'Y' or 'N' ";
						cin>>d;
					}
				while(d=='Y');
				break;
			}
		case 3:
			{
				sort<char>a;
				do
					{
						cout<<"\n1.Getdata \n2.Sort the data \n3.Display";
						cin>>c;
					switch(c)
					{
						case 1:a.getdata();
							break;
						case 2:a.sorting();
							break;
						case 3:a.display();
							break;
					}
						cout<<"Do you want to continue? Press 'Y' or 'N' ";
						cin>>d;
					}
				while(d=='Y');
				break;
			}
		
		
	}
}
		
		