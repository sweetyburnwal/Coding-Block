#include<iostream>
using namespace std;
void sumofdigit(long long num)
{
	int evenSum=0;
	int oddSum=0;
	while(num>0)
	{
		int rem= num%10;
		if(rem%2==0)
		{
			evenSum+=rem;
		}else oddSum+=rem;
		num=num/10;
	}
	if(evenSum%4==0 || oddSum%3==0)
	{
		cout<<"Yes"<<endl;
	}else cout<<"No"<<endl;
}
int main()
{
	int N;
	cin>>N;
	long long carno[N];
	for(int i=0;i<N;i++)
	{
		cin>>carno[i];
	}
    for(int i=0;i<N;i++)
    {
    	sumofdigit(carno[i]);		
	}		 
}   
