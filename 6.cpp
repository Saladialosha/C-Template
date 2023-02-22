//greater of the two number 
#include<iostream>
using namespace std;
template <typename T>
T vote(T a)
{
	if(a>=18)
	{
		cout<<"Person is eligible for voting"<<endl;
	}
	else 
	{
		cout<<"Person is not eligible for voting"<<endl;
	}
}
main()
{
	int b;
	cout<<"Enter the age: "<<endl;
	cin>>b;
	vote<int>(b);
}
