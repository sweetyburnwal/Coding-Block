#include<iostream>
using namespace std;

int main()
{
	char s[1000];
	cin>>s;
	for(int i=0;s[i]!='\0';i++)
	{
		if(i%2==1)
		{
			s[i]=s[i]-1;
		}
		else
		{
			s[i]=s[i]+1;
		}
	}
	cout<<s<<endl;
	return 0;
}
