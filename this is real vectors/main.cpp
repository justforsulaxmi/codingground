
//vector

#include<iostream>
using namespace std;
template<class T>
class vector
{
    T a[10];
    int i,size;
    public:
    void create();
    void display();
    void mul();
    void update();
};

template<class T>
void vector<T>::create()
{
    cout<<"\nplease enter the number of elements you want to insert:";
    cin>>size;
    cout<<"\nenter the elements:";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
}
template<class T>
void vector<T>::display()
{
    cout<<"\nthe elements are:";
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<"\n";
    }
}
template<class T>
void vector<T>::mul()
{
    int m;
    cout<<"\nenter the no.with which you want to multiply:";
    cin>>m;
    for(i=0;i<size;i++)
    {
        a[i]=a[i]*m;
        cout<<"\nthe multiplied list is:"<<a[i];
    }
}
template<class T>
void vector<T>::update()
{
    int l,v;
    cout<<"\nenter the position at which you want to update";
    cin>>l;
    cout<<"\nenter the updated value:";
    cin>>v;
    a[l]=v;
    cout<<"\n\tthe new value at entered position is:"<<a[l];
}

int main()
{
    int ch,op;
    char k,h;
    do
    {
        cout<<"\nplease enter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                vector<int>b;
                do
                {
                    int op;
                    cout<<"\n1.create";
                    cout<<"\n2.display";
                    cout<<"\n3.multiply it with a no?";
                    cout<<"\n4.update";
                    cin>>op;
                    switch(op)
                    {
                        case 1:
                        b.create();
                        break;
                        case 2:
                        b.display();
                        break;
                        case 3:
                        b.mul();
                        break;
                        case 4:
                        b.update();
                        break;
                    }
                    cout<<"\nwant to continue with int?";
                    cin>>k;
                }while(k == 'y');
            }
        }
        cout<<"\nwant to continue?";
        cin>>h;
    }while(h == 'y');
    return 0;
}
