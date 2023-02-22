#include<iostream>
using namespace std;
template<class T>
void array(T a,int s)
{
int i,avg;
int sum=0;
for(i=0;i<s;i++)
{
sum=sum+a[i];
}
avg=sum/s;
cout<<"the average of array is = "<<avg;
}
main()
{
int i,s;
cout<<"enter the size of array";
cin>>s;
int a[s];
cout<<"enter the value of you want array";
for(i=0;i<s;i++)
{
cin>>a[i];
}
array(a,s);
}
