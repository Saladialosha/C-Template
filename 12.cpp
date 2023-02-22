#include<iostream>
using namespace std;
template < typename T>
class base
{
T data;
public :
void set (T val)
{
data=val;
cout<<" value = "<<val;
}
};
template <typename T>
class derived: public base<T>
{
public:
void set(T val); 
};
template<typename T>
void derived<T>::set(T v)
{
base<T>::set(v);
cout<<" V = "<<v;
}
main()
{
derived <int> obj;
obj.set(90);
}
