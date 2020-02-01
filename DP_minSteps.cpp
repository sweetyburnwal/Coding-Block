#include<iostream>
using namespace std;

int minSteps(int n)
{
	if(n==1)
	{
		return 0;
	}
	int option1=INT_MAX,option2=INT_MAX,option3=INT_MAX;
	
	
	option1=minSteps(n-1)+1;
	
	if(n%2==0)
	{
		option2=minSteps(n/2)+1;
	}

	if(n%3==0)
	{
		option3=minSteps(n/3)+1;
	}
	
	int ans=min(option1,min(option2,option3));
	return ans;
}

int topDown(int n,int *dp)
{
	if(n==1)
	{
		dp[n]=0;
		return dp[n];
	}
	
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	
	int option1=INT_MAX,option2=INT_MAX,option3=INT_MAX;
	
	option1=topDown(n-1,dp)+1;
	
	if(n%2==0)
	{
		option2=topDown(n/2,dp)+1;
	}

	if(n%3==0)
	{
		option3=topDown(n/3,dp)+1;
	}
	
	int ans=min(option1,min(option2,option3));
	dp[n]=ans;
	return dp[n];
}

int bottomUp(int n)
{
	int dp[10000];
	dp[1]=0;
	
	for(int i=2;i<=n;i++)
	{
		int option1=INT_MAX,option2=INT_MAX,option3=INT_MAX;
		
		option1=dp[i-1];
		
		if(i%2==0)
		{
			option2=dp[i/2];
		}
		
		if(i%3==0)
		{
			option3=dp[i/3];
		}
		
		dp[i]=1+min(option1,min(option2,option3));
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
	
	cout<<bottomUp(n)<<endl;
	cout<<topDown(n,dp)<<endl;
	cout<<minSteps(n)<<endl;
	
	return 0;
}
