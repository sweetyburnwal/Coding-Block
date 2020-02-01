#include<iostream>
#include<cstring>
using namespace std;

void compression(string s)
{
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		int count=0;
		while(i<n && s[i]==s[i+1])
		{
			count++;
			i++;
		}
		if((count+1)==1)
		{
			cout<<s[i];
		}
		else
		{
			cout<<s[i]<<count+1;
		}
	}
}
int main()
{
	string s;
	cin>>s;
	compression(s);
	return 0;
}
