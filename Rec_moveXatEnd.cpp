#include<iostream>
using namespace std;

string moveXtoEnd(string s)
{
	if(s.length()==0)
	{
		return "";
	}
	char ch=s[0];
	string remainingString=s.substr(1);
	string recursionResult=moveXtoEnd(remainingString);
	
	if(ch=='x')
	{
		return recursionResult+ch;
	}
	else
	{
		return ch+recursionResult;
	}
}
int main()
{
	string s;
	cin>>s;
	cout<<moveXtoEnd(s)<<endl;
	return 0;
}
