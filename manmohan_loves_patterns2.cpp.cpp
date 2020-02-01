#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1;
	int j=10;
	cout<<i<<endl;
	while(i<n)
	{
		cout<<i*j+i<<endl;
		j=j*10;
		i=i+1;
	}
	return 0;
}
