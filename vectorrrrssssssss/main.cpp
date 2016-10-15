//selection

#include<iostream>
using namespace std;
template<class T>
void get(T a[],int n)
{
    int i;
    cout<<"\nplease enter the no.of elements you want to enter:";
    cin>>n;
    cout<<"\nnow please enter the elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
}

template<class T>
void sort(T a[],int n)
{
    int i,j;
    int min;
    
    for(i=0;i-1<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            min=j;
        }
        swap(a[i],a[min]);
    }
}

template<class T>
void swap(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

template<class T>
void display(T a[],int n)
{
    int i;
    cout<<"\nthe elements of array are:";
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }
}

int main()
{
    int ch;
    char k;
    int a1[5];
    float a2[5];
    char a3[5];
    
    do
    {
        cout<<"\nplease enter your choice:";
        cout<<"\n1.integer";
        cout<<"\n2.float";
        cout<<"\n3.character";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                get(a1,5);
                sort(a1,5);
                display(a1,5);
            }
            case 2:
            {
                get(a2,5);
                sort(a2,5);
                display(a2,5);
            }
            case 3:
            {
                get(a3,5);
                sort(a3,5);
                display(a3,5);
            }
        }
        cout<<"\ndo you want to continue?";
        cin>>k;
    }while(k == 'y');
}