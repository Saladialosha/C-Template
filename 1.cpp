#include<iostream>
using namespace std;
template<class T>
T add(T a ,T b)
{
	return a+b;
}
main()
{
	int x=10;
	int y=20;
	cout<<add( x,y)<<endl;
	cout<<add(10.9f,12.8f)<<endl;
}
