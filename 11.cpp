#include<iostream>
using namespace std;
template < class T>
class abc
{
public:
T value1 ;
T value2 ;
void get()
{
	cout<<"enter the values "<<endl;
	cin>>value1>>value2;
}
void add()
{
cout<<" addition of "<<value1+value2<<endl;
}
};
main()
{
abc<int> obj1;
obj1.get();
obj1.add();
}
