#include<iostream>
using namespace std;



int reverseNum(int num)
{
	int ans=0;
	while(num!=0)
	{
		int rem=num%10;
		ans= ans*10+rem;
		num/=10;
	}
	
	
	return ans;
}
int main()
{
	int t;
	cin>>t;
	
	while(t>0)
	{
		int x;
		cin>>x;
		int ans= reverseNum(x);
		cout<<ans;
		t--;
	}
	
	
	
	
//	int ans = reverseNum(104);
//	cout<<ans;
	return 0;
	//Reverse a number 456  //654
	
	//int number 4,   789, 656, 567, 432   // || 
	
	
	
}
