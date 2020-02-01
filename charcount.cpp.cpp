#include<iostream>
using namespace std;
int main()
{
	int count=0;
	char ch;
	cin>>ch;
	
	while(ch!='$')
	{
		count++;
		cin>>ch;
	}
   cout<<count<<endl;
   return 0;	
}
