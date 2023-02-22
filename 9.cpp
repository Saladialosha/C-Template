#include<iostream>
using namespace std;
template<class T>
class mytmp
{
	T a,b;
	public:
		mytmp(T first,T second)
		{
			a=first;
			b=second;
		}
		T getmaxval()
		{
			return(a>b? a:b);
		}
};
main()
{
	mytmp<int>obj1(50,60);
	cout<<obj1.getmaxval()<<endl;
	mytmp<char>obj2('A','b');
	cout<<obj2.getmaxval()<<endl;
}
