#include<iostream>
#include<cstring>
using namespace std;

int ans=0;

void countHi(char arr[],int n)
{
	if(n==0)
	{
		return;
	}
	countHi(arr,n-1);
	if(arr[n-2]=='h' && arr[n-1]=='i')
	{
		ans++;
	}
}

void replaceHi(char arr[],int n,int size)
{
	if(n==0)
	{
		return;
	}
	if(arr[n-1]=='h' && arr[n]=='i')
	{
		replaceHi(arr,n-1,size);
	}
	else if(arr[n-2]=='h' && arr[n-1]=='i')
	{
		replaceHi(arr,n-1,size);
	}
	else
	{
		replaceHi(arr,n-1,size);
		cout<<arr[n-1];
	}
}

void replaceHiWithBye(char arr[],int n,int size)
{
	if(n==0)
	{
		return;
	}
	if(arr[n-1]=='h' && arr[n]=='i')
	{
		replaceHiWithBye(arr,n-1,size);
		cout<<"bye";
	}
	else if(arr[n-2]=='h' && arr[n-1]=='i')
	{
		replaceHiWithBye(arr,n-1,size);
	}
	else
	{
		replaceHiWithBye(arr,n-1,size);
		cout<<arr[n-1];
	}
}

int main()
{
	char arr[100];
	cin>>arr;
	int n=strlen(arr);
	countHi(arr,n);
	cout<<ans<<endl;
	
	replaceHi(arr,n,n);
	cout<<endl;
	
	replaceHiWithBye(arr,n,n);
	cout<<endl;
	
	
	
	return 0;
}
