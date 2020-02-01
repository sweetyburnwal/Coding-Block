#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			cout<<(n-j)+1<<" ";
		}
		cout<<endl;
	}
}
