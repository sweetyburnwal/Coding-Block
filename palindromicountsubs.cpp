#include<iostream>
using namespace std;

bool pallindromeString(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!=s[s.length()-i-1])
		{
			return false;
		}
	}
	return true;
}

void substring(string s)
{
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		for(int j=i;j<=s.length();j++)
		{
			for(int k=i;k<=j;k++)
			{
				cout<<s[k]<<endl;   //willprint substrings
//				if(pallindromeString(s))
//				{
//                    count++;
//				}
			}
		}
	}
	cout<<count;
}

int main()
{
	string s;
	cin>>s;
    substring(s);
	return 0;
}
