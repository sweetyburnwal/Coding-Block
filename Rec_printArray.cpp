#include<iostream>
using namespace std;

void print(int *a,int n)
{
	//base case
	if(n==0)
	{
		return;
	}
	cout<<a[0]<<" ";
	print(a+1,n-1);   //array gets reversed if this line is written before the previous line
}

int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	print(a,n);
	return 0;
}
