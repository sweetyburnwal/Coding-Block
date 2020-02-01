#include<iostream>
#include<cstring>
using namespace std;
string deleteHi(string s)
{
    if(s.length()<2)
    {
        return s;
    }
    string stringCheck=s.substr(0,2);
    char currentChar=s[0];
    if(stringCheck.compare("hi")==0)
    {
        string remainingString=s.substr(2);
        string recursionResult=deleteHi(remainingString);
        return recursionResult;
    }
    else
    {
        string remainingString=s.substr(1);
        string recursionResult=deleteHi(remainingString);
        return currentChar+recursionResult;
    }
    
}
int main()
{
    string s;
    cin>>s;
    string ans = deleteHi(s);
    cout<<ans;
}
