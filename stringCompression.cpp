#include<iostream>
using namespace std;
int main() {
	string s="hhhheeffgoll";
	string s1="";
	int i=0;
	while(i<s.length())
	{
		int counter=0;
        char ch = s[i];
		while(i<s.length() && s[i]==ch)  //s.charAt(i)==ch can also be written as str[i]==ch
		{
			i++;
			counter++;
		}
		if(counter!=1)
		{
			s.append(s1);
			s1.append(counter);
		}
		
	}
	cout<<s;
	
	return 0;
}
