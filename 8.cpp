//greater between two number using templates
#include<iostream>
using namespace std;
template <typename T>
T max1(T a,T b)
{
return (a>b)?a:b;
}
main()
{
cout<<max1<int>(5,10)<<endl;
cout<<max1<float>(15.5, 40.5)<<endl;
}
