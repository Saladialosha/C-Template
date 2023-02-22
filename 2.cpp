#include<iostream>
using namespace std;
template<class T1 , class T2>
void print(T1 x , T2 y)
{
	cout<<x<<" "<<y<<endl;
}
main()
{
	print(2,'a');
	print(5,5);
}
