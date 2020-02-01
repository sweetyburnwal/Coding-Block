#include<iostream>
using namespace std;

string s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void print(int n)
{
	if(n==0)
	{
		return;
	}
	int lastTerm=n%10;   //to find last digit of the number
	print(n/10);
	cout<<s[lastTerm]<<" ";
}
int main()
{
	int n;
	cin>>n;
	print(n);
	return 0;
}

