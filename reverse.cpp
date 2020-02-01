#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	for(int i=0;num>0;num=num/10)
	{
	   cout<<num%10;
	}
	return 0;
}
