#include<iostream>
using namespace std;
int fact(int n)
{
	//base acse
	if(n==1)
	{
		return 1;
	}
	int ans=n*fact(n-1);
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}
