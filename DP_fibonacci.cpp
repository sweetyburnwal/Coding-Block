#include<iostream>
using namespace std;

int fib(int n)
{
	if(n==0 || n==1)
	{
		return n;
	}
	int ans=fib(n-1)+fib(n-2);
	return ans;
}

int topDown(int n,int *dp)
{
	if(n==0 || n==1)
	{
		dp[n]=n;
		return dp[n];
	}
	int ans=topDown(n-1,dp)+topDown(n-2,dp);
	dp[n]=ans;
	return dp[n];
}

int bottomup(int n)
{
	int dp[1000];
	dp[0]=0;
	dp[1]=1;
	
	for(int i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}

int main()
{
	int n;
	cin>>n;
	
	int dp[1000];
	for(int i=0;i<1000;i++)
	{
		dp[i]=-1;
	}
	
	cout<<bottomup(n)<<endl;
	cout<<topDown(n,dp)<<endl;
	cout<<fib(n)<<endl;
	
	return 0;
}
