//print fibonnacci from 1 to N
//print factorial of N
#include<iostream>
using namespace std;
int fibonacci(int n)
{
if (n<=1)
{
	return 1;
}
else { return fibonacci(n-1)+fibonacci(n-2);
}
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<fibonacci(i)<<endl;
	}
	
	return 0;
}
