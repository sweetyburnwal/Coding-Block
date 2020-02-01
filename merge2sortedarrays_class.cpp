#include<iostream>
using namespace std;
void sortmerge(int a[],int b[],int n,int m,int res[])
{
	int i=0,j=0,k=0;
	while(i<j)
	{
		k[m+n-1]=b[j];
		j--;
	}
	while(j<i)
	{
		k[m+n-1]=a[i];
		i--;
	}
	sort(res,res+n+m);
}
int main()
{
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	int a[]={1,3,5,7};
	int b[]={2,4,6,8,10};
	cout<<"sorted merge list is: ";
}
