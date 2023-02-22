#include<iostream>
using namespace std;
template<class T1,class T2>
class mytmp
{
	T1 a;
	T2 b;
	public:
		mytmp(T1 x,T2 y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<" values of a,b "<<a<<" "<<b<<endl;
		}
};
main()
{
	mytmp<int,int>obj1(50,60);
    obj1.show();
    mytmp<int,float>obj2(50.5,60);
    obj2.show();
	
}
