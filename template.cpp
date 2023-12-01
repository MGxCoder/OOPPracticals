#include<iostream>
using namespace std;
template <class T>
void display( int a,T x[])
{
    for(int i=0;i<a;i++)
{
    cout<<x[i]<<" ";
}
}

template <class T>
void sort(int a,T x[])
{

   for (int i=0;i<a;i++)
{
     for (int j=i+1;j<a;j++)
{    
    T temp;
    if(x[i]>x[j])
  {
    temp=x[i];
    x[i]=x[j];
    x[j]=temp;
}
}
}
}
int main()
{
  int a[10],n,m;
  float b[20];
  cout<<"\nEnter total Integer number of element:";
  cin>>n;
  for (int i=0 ;i<n;i++)
{
  cout<<"Enter Element:";
  cin>>a[i];
}

  cout<<"\nInteger  element:";
  cout<<"\nBefore Sort:";
  display(n,a);
  cout<<"\nAfter Sort:";
  sort(n,a);
  display(n,a);
  cout<<"\n\nEnter total Float number of element:";
  cin>>m;
  for (int i=0 ;i<m;i++)
{
  cout<<"\nEnter Element:";
  cin>>b[i];
}
  cout<<"\nFloat  element:";
  cout<<"\nBefore Sort:";
  display(m,b);
 
  cout<<"\nAfter Sort:";
  sort(m,b);
  display(m,b);
  cout<<"";

 return 0;
}

  

