
#include<iostream>
using namespace std;
//void add(int a, int b)
template <typename T>
void add(T a, T b)
{
cout<<a+b<<endl;
}
main()
{
add<int>(3,7);
add<float>(3.5,6.5);
add<double>(4.55, 6.77);
}
