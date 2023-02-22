#include<iostream>// limitation of templates
using namespace std;

void fun( double a )
{
cout<< " value of a is : "<<a<<endl;
}

void fun(int b )
{
if (b%2==0)
{
cout<<" number is even"<<endl;
}
else
{
cout<<" number is odd"<<endl;
}

}

main()
{
fun(4);
fun(8.55);

}
