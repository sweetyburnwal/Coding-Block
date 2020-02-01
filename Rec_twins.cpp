#include<iostream>
#include<cstring>
using namespace std;

int twins(string str)
{
	if(str.length()<3)
	{
		return 0;
	}
    string remainingString=str.substr(1);
    char currentChar=str[0];
    if(str[0]==str[2])
    {
    	return twins(remainingString)+1;
	}
	return twins(remainingString);
}
int main()
{
	string str;
	cin>>str;
	int ans=twins(str);
	cout<<ans<<endl;
	return 0;
}
