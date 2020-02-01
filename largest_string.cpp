#include<iostream>
#include<cstring>
using namespace std;
int length(char *ch)
{
	int i;
	for(i=0;ch[i]!='\0';i++)
	{
		
	}
	return i;
}
int main()
{
	int n;
	cin>>n;
	
	char a[1000],currans[1000];
	int len=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(len<strlen(a))
		{
			strcpy(currans,a);
			len=strlen(a);
		}
	}
	cout<<currans<<" "<<len<<endl;
	return 0;
}
