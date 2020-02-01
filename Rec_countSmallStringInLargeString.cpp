#include<iostream>
#include<cstring>
using namespace std;

int countSubstring(string s1,string s2="hi")
{
	int n1=s1.length();
	int n2=s2.length();
	
	//base case
	if(n1==0 || n1<n2)
	{
		return 0;
	}
	//recursive case
	//checking if the first substring matches
	if(s1.substr(0,n2).compare(s2)==0)
	{
		return countSubstring(s1.substr(n2-1),s2)+1;
	}
	//otherwise return count from remaining index
	return countSubstring(s1.substr(n2-1),s2);
}

int main()
{
    string s1;
	cin>>s1; 
	string s2="hi";
    cout << countSubstring(s1,s2) << endl; 
    return 0; 
} 

