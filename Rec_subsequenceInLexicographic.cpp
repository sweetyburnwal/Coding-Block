#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string temp="";
multiset<string> s;   //set stores string in lexicographical order
void go(string str,int pos)
{
	//cout<<temp<<endl;
	s.insert(temp);
	for(int i=pos;i<str.length();i++)
	{
		temp.push_back(str[i]);   //considering current position
		go(str,i+1);
		temp.pop_back();    //neglecting the current position
	}
}
//a b c
//0 1 2
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		s.clear();
		temp="";
		string str;
		cin>>str;
		go(str,0);
		for(auto i:s)
		cout<<i<<endl;
	}
	return 0;
}
