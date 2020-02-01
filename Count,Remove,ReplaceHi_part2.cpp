#include<iostream>
#include<cstring>
using namespace std;

int ans=0;

//function to count number of hi which is not followed by t
void countHi(char arr[],int n)
{
	if(n==0)
	{
		return;
	}
	countHi(arr,n-1);
	if(arr[n-2]=='h' && arr[n-1]=='i' && arr[n]!='t')
	{
		ans++;
	}
}


//function which replace hi from given strings
void RemoveHi(char arr[],int n,int size)
{
	if(n==0)
	{
		return;
	}
	RemoveHi(arr,n-1,size);
    if(arr[n-1]=='h' && arr[n]=='i' && arr[n+1]!='t')
	{
		
	}
	else if(arr[n-2]=='h' && arr[n-1]=='i' && arr[n]!='t')
	{
		
	}
	else
	{
		cout<<arr[n-1];
	}
}


//function which replace hi to bye
void replaceHiWithBye(char arr[],int n,int size)
{
	if(n==0)
	{
		return;
	}
	replaceHiWithBye(arr,n-1,size);
	if(arr[n-1]=='h' && arr[n]=='i' && arr[n+1]!='t')
	{
		cout<<"bye";
	}
	else if(arr[n-2]=='h' && arr[n-1]=='i' && arr[n]!='t')
	{
	
	}
	
	else
	{
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
	
	RemoveHi(arr,n,n);
	cout<<endl;
	
	replaceHiWithBye(arr,n,n);
	cout<<endl;
	
	
	
	return 0;
}
