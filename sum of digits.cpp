#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"input number";
	cin>>n;
	while(n>0){
		sum=sum+n%10;
		n=n/10;
	}
	cout<<sum<<endl;
	return 0;
}