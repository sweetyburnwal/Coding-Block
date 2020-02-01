#include<iostream>
#include<cstring>
using namespace std;

char getMaxOccurringChar(char str[])
{
	int freq[26]={0};
	int max=-1;
	char result;
	int length=strlen(str);
	
	for(int i=0;i<length;i++)
	{
		freq[str[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(max<freq[i])
		{
			max=freq[i];
			result=(char)(i+'a');
		}
	}
	return result;
}
int main()
{
	char str[100]="aaabacb";
	cout<<getMaxOccurringChar(str);
	return 0;
}
