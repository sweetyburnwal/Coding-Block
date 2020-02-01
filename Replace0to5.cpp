#include<iostream>
using namespace std;

long convert0to5rec(long long num)
{
	//base case
	if(num==0)
	{
		return 0;
	}
	//extract the last digit and change it if needed
	int digit=num%10;
	if(digit==0)
	{
		digit=5;
	}
	//convert remaining digits
	return convert0to5rec(num/10)*10+digit;
}

long long convert0to5(long num)
{
	if(num==0)
	{
		return 5;
	}
	else
	{
		return convert0to5rec(num);
	}
}
	
int main()
{
	long long num;
	cin>>num;
	cout<<convert0to5rec(num);
	return 0;
}

