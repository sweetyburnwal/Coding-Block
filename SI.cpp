#include<iostream>
using namespace std;
int sumofdigit (int );
int main()
{
	int N;
	cin>>N;
	int carNo[N];
	for(int i=0;i<N;i++)
	{
		cin>>carNo[i];
	}
for(int i=0;i<N;i++)
{
	if(sumofdigit(carNo[i])%2==0)
	{
	    if(sumofdigit(carNo[i])%4==0)
     	{
		cout<<"Yes";
		cout<<endl;
    	}
    	else
	{
		cout<<"No";
		cout<<endl;
	}
    }
	else if(sumofdigit(carNo[i])%2==1)
	{
		if(sumofdigit(carNo[i])%3==0)
		{
		cout<<"Yes";
		cout<<endl;
     	}else
	{
		cout<<"No";
		cout<<endl;
	}
    }
	
}
	
	
	
	
}
int sumofdigit(int num){
	int sum=0;
	while(num>0)
	{
		sum=sum+num%10;
		num=num/10;
	}
	return sum;
	
}


