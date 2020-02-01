#include<iostream>
#include<cstring>
using namespace std;

string Table[10]={" ",".+@$","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void printTableString(char *in,char *out,int i,int j)
{
	//base case
	if(in[i]=='\0')
	{
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	//recursive case
	int digit=in[i]-'0';
	
	for(int k=0;Table[digit][k]!='\0';k++)
	{
		out[j]=Table[digit][k];
		printTableString(in,out,i+1,j+1);
	}
}

int main()
{
	char in[100];
	char out[100];
	cin>>in;
	printTableString(in,out,0,0);
	return 0;
}
