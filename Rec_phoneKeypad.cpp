#include<iostream>
using namespace std;

string s[]={" ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void phoneKeypad(char in[],char out[],int i,int j)
{
	if(in[i]=='\0')
	{
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	
	int index=in[i]-'\0';
	
	for(int k=0;s[index][k]!='\0';k++)
	{
		out[j]=s[index][k];
		phoneKeypad(in,out,i+1,j+1);
	}
}

int main()
{
	char in[100],out[100];
	cin>>in;
	
	phoneKeypad(in,out,0,0);
	return 0;
}
