//String 
#include<iostream>
#include<cstring>
using namespace std;



bool pallindromeString(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!=s[s.length()-i-1])
		{
			return false;
		}
	}
	return true;
}
void substring(string str)
{
	int count=0;
	for (int i = 0; i < str.length(); i++) {
            for (int j = i + 1; j <= str.length(); j++) {
                      string substring=str.substr(i,j-i);
                if(pallindromeString(substring) && substring.length()>0)
                {
                	//cout<<i<<" "<<j<<" "<<str.substr(i,j-i)<<endl;
                	count++;
				}
                
            }
        }
        cout<<count;

}



int main()
{
	string s= "abc";
//	getline(cin,s1);   //Collection of words
//	cout<<s1;			//Print the complete string
//	cout<<s1.substr(0,2);   //substring starting at position 0 and length 2 
//	cout<<s1.size();  //Print  size of string
//	cout<<s1.substr(1,3);


//	for(int i=0;i<s1.size();i++)
//	{
//		cout<<s1[3]<<" ";  //s1[i] print char at index i;
//	}
//	string s2= "Burnwal";
//	cout<<s1+" "+s2;
//	bool ans = pallindromeString(s);
//	cout<<ans<<endl;
	substring(s);
//	cout<<s1;
}

