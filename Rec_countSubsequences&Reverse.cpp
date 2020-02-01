#include<iostream>
using namespace std;

int subsequences(char in[],char out[],int i,int j)
{
	if(in[i]=='\0')
	{
		//out[j]=in[i];
		//cout<<out<<endl;
		//return;
		return 1;
	}
	//out[j]=in[i]
	int x1=subsequences(in,out,i+1,j+1);
	int x2=subsequences(in,out,i+1,j);
	return x1+x2;
}


int main()
{
	char in[1000],out[1000];
	cin>>in;
	cout<<subsequences(in,out,0,0);
	return 0;
}
