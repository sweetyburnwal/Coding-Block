#include<iostream>
using namespace std;
bool isSorted(int *a,int n)
{
	//base case
	if(n==1)
	{
		return true;
	}
	//recursive case
	//bool chhoteKaAns=isSorted(a+1,n-1);
	return (a[0]<=a[1])&&(isSorted(a+1,n-1));

}

bool isSorted1(int *a,int i,int n)
{
	if(i==n-1)
	{
		return true;
	}
	if(a[i]<=a[i+1]&&isSorted1(a,n-1))
	{
		return true;
	}
	return false;
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
	if(isSorted(a,n))
	{
		cout<<"yes,sorted";
	}
	else
	{
		cout<<"no,not sorted";
	}
	
	if(isSorted1(a,i,n))
	{
		cout<<"yes sorted";
	}
	else
	{
		cout<<"not sorted";
	}
	return 0;
}
