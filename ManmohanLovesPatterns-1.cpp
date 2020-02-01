//In the given pattern for every odd number row print 1,odd number of times and for every even number row,print first and last character as 1 and rest of middle characters as 0

#include<iostream>
using namespace std;

int main()
{
	int i,j,k,n;
	cin>>n;
	//loop for each row
	for(i=1;i<=n;i++)
	{
		//for odd number of row and second row print 1
		if(i%2==1 || i==2)
		{
			for(j=1;j<=i;j++)
			{
				cout<<"1";
			}
			cout<<endl;
		}
		else if(i%2==0 && i!=2)
		{
			//for even number of row except second row
			for(k=1;k<=i;k++)
			{
				if(k==1 || k==i)
				{
					cout<<"1";  //print 1 at first and last position
				}
				else
				{
                    cout<<"0";   //print 0 at in between positions
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
