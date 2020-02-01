#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b)
{
	return a>b;
}

int main()
{
	int a[]={4,3,1,6,7};
	int n=sizeof(a)/sizeof(int);
	sort(a,a+n,compare);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
