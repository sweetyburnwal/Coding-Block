#include<iostream>
#include<cstring>
using namespace std;

char* removeConsecutiveDuplicates(char* s)
{
	int i,j;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==s[i+1])  //if the consecutive character is same  //checks only for s[1] and s[2]
		{
			for(j=i;s[j]!='\0';j++)  //j is used to store the index of current distinct character
			{
				s[j]=s[j+1];   //shift characters by one to left
			}
			i--;   //checks for all consecutive duplicate characters
		}
	}
	return(s);
}

int main()
{
	char s[100];
	cin>>s;
	cout<<removeConsecutiveDuplicates(s);
	
	return 0;
	
}

