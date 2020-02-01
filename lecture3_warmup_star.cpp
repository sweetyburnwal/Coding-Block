#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	for(int row=1;row<=n;row++)
	{
		for(int stars=1;stars<=row;stars++)
		{
			cout<<"*";
		}
		cout<<" ";
		for(int stars=1;stars<=n-row+1;stars++)
		{
			cout<<"*";
		}
		cout<<" ";
        for(int stars=1;stars<=n-row+1;stars++)
		{
			cout<<"*";
		}
		cout<<" ";
        for(int stars=1;stars<=row;stars++)
		{
			cout<<"*";
		}
		cout<<endl;
    }
	return 0;
}
