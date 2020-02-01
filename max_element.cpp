#include<iostream>
using namespace std;
int main()
{
	int max=INT_MIN;
	int a[]={56,100,23,3456,98};
	int n=sizeof(a)/sizeof(int);
	
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<max<<endl;
	return 0;
}
