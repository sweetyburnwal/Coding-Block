#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int val;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			val=0;
		}
		else
		{
			val=1;
		}
		for(int j=1;j<=i;j++)
		{
			cout<<val<<" ";
			val=1-val;
		}
		cout<<endl;
	}
	return 0;
}
