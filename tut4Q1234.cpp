#include<iostream>
using namespace std;
int  findmaximum(int a[],int n);
void Reverse(int a[], int n);
int main()
{
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
//	int maxinArray= findmaximum(a,n);
//	cout<<maxinArray;
	Reverse(a,n);
	
}
int  findmaximum(int a[],int n)
{
	int max=INT_MIN;
	int indexPosition;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			indexPosition=i;
			
		}
	}
	cout<<"Index is "<<indexPosition<<endl;
	return max;
}

int FindElement(int a[],int n, int M)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==M)
		{
			return i;
		}
	}
	return -1;
}
void Reverse(int a[], int n)
{
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
}

