#include<iostream>
#include<cstring>
using namespace std;

void deleteX(string s)
{
	int n=s.length();
	for(int i=0;i<s.length();i++)
	{
		while(i<n && s[i]=='x')
		{
			s[i]=s[n-1];
			i++;
		}
		cout<<s[i];
	}
}
int main()
{
	string s;
	cin>>s;
	deleteX(s);
	return 0;
}
