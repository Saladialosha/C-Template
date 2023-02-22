#include<iostream>
using namespace std;
template <typename T>
void vote(T a)
{
if(a>=18)
cout<<"Allowed"<<endl;
else
cout<<"Not allowed"<<endl;
}

main()
{
int age;
while(1)
{cout<<"Enter your age";
cin>>age;
vote(age);
}

}
