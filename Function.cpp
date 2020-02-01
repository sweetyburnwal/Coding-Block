#include<iostream>
using namespace std;
float sum(float x, float y);
bool CheckPrime(int u);
int FindElement(int arr[], int n, int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
//	int arr[]={1,2,3,4,56};
//	int n=5;
//	int element;
//	cin>>element;
//	int x = FindElement(arr,n,element);
//	cout<<x;
//	float a= 5.6;
//	float b= 7.8;
//	float sweety= sum(a,b);
//	cout<<sweety;
	bool answer= CheckPrime(13);
	cout<<answer<<"    ";
}
float sum(float x, float y)
{
	cout<<x<<" "<<y;
	return x+y;
}
bool CheckPrime(int x)
{
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		{
			return false;
		}
	}
	return true;
}


