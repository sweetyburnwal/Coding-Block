#include<iostream>
using namespace std;

int sumarray(int *p,int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=*(p+i);
	}
	return sum;
}

int main()
{
	int n;
	int a=10;
	cout<<&a<<endl;
	
	int *p=&a;        //* is pointer
	cout<<p<<endl;    //returns address
	cout<<*p<<endl;   //returns value & here * is derefencing operator
	
	int arr[100]={1,2,3};
	cout<<arr<<endl;  //starting bucket address
	cout<<&arr[0]<<endl;
	cout<<&arr+1<<endl;
	cout<<arr[1]<<endl;
	cout<<*(arr+1)<<endl;    //arr[1]=*(arr+1)
	
	sumarray(&a,n);
	cout<<*(arr+1)<<endl;
	
	return 0;
}
