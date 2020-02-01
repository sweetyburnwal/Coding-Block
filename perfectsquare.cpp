#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
    int i=1;
	while(i*i<=n)
	{
	    i++;
	}
	i=i-1;
	cout<<i<<endl;
	return 0;
	
}
