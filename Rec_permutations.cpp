#include<iostream>
using namespace std;

void permutations(char *in,int i)
{
    if(in[i]='\0')
	{
		cout<<in<<endl;
		return;
	}
	for(int j=i;in[j]!='\0';j++)
	{
		swap(in[i],in[j]);  //arrays are always passed by reference
		permutations(in,i+1);
		swap(in[i],in[j]);  //backtracking
	}	
}

int main()
{
	char in[100];
	cin>>in;
	permutations(in,0);   //j is the local of a perticular recursive step
	return 0;
}
