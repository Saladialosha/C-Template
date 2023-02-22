
/// Write a template function that returns the average of all the elements of an array. The
/// arguments to the function should be the array name and the size of the array (type int).
/// In main(), exercise the function with arrays of type int, long, double, and char.

#include<iostream>
using namespace std;

template<class T>
float avg(T a, int size)
{
        int i;
         int sum=0;
        for(i=0;i<size;i++)
        {
                sum=sum+a[i];
        }
        return sum/size;
}
main()
{
        int arr[5]={10,20,30,40,50};
        cout<<avg(arr,5)<<endl;
        double ar[4]={4.9,3.2,9.7,6.6};
        cout<<avg(ar,4)<<endl;
        char a[3]={'x','a','g'};
        cout<<avg(a,3)<<endl;
}
