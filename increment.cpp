#include<iostream>
using namespace std;
int main()
{
	int n,precision;
	cin>>n>>precision;
	float i=1;
	float increment=1;
	
	int p=1;
	while(p<=precision)
	{
	    while(i*i<=n)
     	{
	    	i=i+increment;
    	}
    	i=i-increment;
    	increment=increment/10;
    	p++;
    }
    	cout<<i<<endl;
    	return 0;
}

