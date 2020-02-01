#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	string s1="sweety";   //Check char
	char ch;
	cin>>ch;
	int sweety= 0;
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]==ch)
		{
			cout<<i;
			sweety = 1;
		}
	}
	if(sweety== 0)
	{
		cout<<"-1";
	}
	
}
