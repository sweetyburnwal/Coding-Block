#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(int);
	int key;
	cin>>key;
	
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			cout<<"element prsent"<<endl;
			break;
		}
	}
	if(i==n)
	{
		cout<<"element absent"<<endl;
	}
	return 0;
}
