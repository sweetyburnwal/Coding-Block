#include<iostream>
#include<cstring>
using namespace std;
void rotate(char a[],int n)
{
	int len=strlen(a);
	int j=len-1;
	for(j=len-1;j>=0;j--)
	{
		a[j+n]=a[j];
	}
	cout<<a<<endl;
	int k=len;
	for(int i=0;i<n;i++)
	{
		a[i]=a[len+i];
	}
	a[len]='\0';
	cout<<a<<endl;
}
int main()
{
	char a[1000];
	cin>>a;
	
	int n;
	cin>>n;
	
	rotate(a,n);
	return 0;
}

