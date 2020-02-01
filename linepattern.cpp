#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int oddcheck=n;
	int evencheck=n;
	while(oddcheck>=1)          //for odd print
	{
		if(oddcheck%2==1)
		{
			cout<<oddcheck<<endl;
			oddcheck=oddcheck-2;
		}
		else
		{   
		    oddcheck--;
		}

	}
	int evenStart=2;     //for even print
	while (evencheck>=evenStart)
	{
	    if(evencheck%2==0)
	    {
	        cout<<evenStart<<endl;
	        evenStart=evenStart+2;
	    }
	    else{
	        evencheck--;
	    }
	}
	return 0;
}
