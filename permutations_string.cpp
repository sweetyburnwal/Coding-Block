#include<iostream>
#include<cstring>
using namespace std;
bool isPermutation(char s1[],char s2[])
{

	int freq[26]={0};
	for(int i=0;s1[i]!='\0';i++)
	{
		int index=s1[i]-'a';
		freq[index]++;
	}
	for(int i=0;s2[i]!='\0';i++)
	{
		int index=s2[i]-'a';
		freq[index]--;
	}
	for(int i=0;i<26;i++)
	{
		if(freq[i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	char s1[1000],s2[1000];
	cin>>s1>>s2;
	if(isPermutation(s1,s2))
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
