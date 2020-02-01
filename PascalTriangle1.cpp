#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int num=1;  //starting number
		//work for spaces
		for(int space=1;space<=(n-i+1);space++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			if(j==1)
			{
				cout<<j<<" ";
			}
			else
			{
				num=num*(i-j+1)/(j-1);  //updating number
				cout<<num<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
