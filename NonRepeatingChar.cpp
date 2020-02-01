#include<iostream>
#include<cstring>
using namespace std;

char firstNonRepeatingChar(string str)
{
	int i,j;
	int count=0;
	int len=str.length();
	
	for(i=0;i<len;i++)
	{
		count=0;
		for(j=0;j<len;j++)
		{
			if(i!=j && str[i]==str[j])
			{
				count++;
				break;
			}
		}
		if(count==0) //found first non repeating character
		{
			return str[i];
		}
	}
	return '' ;
}

int main()
{
	string str;
	cin>>str;
	char ans=firstNonRepeatingChar(str);
	cout<<ans;
}

