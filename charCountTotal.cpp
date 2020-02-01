#include<iostream>
using namespace std;
int main()
{
	int characters=0,digits=0,whitespaces=0,specialcharacters=0;
    char ch;
    cin>>ch;
    while(ch!='$')
    {
    	if(ch='A'&&ch<='Z'||ch>='a'&&ch<='z')
    	{
    		characters++;
		}
		else if(ch>='0'&&ch<='9')
		{
			digits++;
		}
		else if(ch==' ')
		{
			whitespaces++;
		}
		else
		{
			specialcharacters++;
		}
		ch=cin.get();
	}
	cout<<"characters are"<<characters<<endl;
	cout<<"digits are"<<digits<<endl;
	cout<<"whitespaces are"<<whitespaces<<endl;
	cout<<"specialcharacters are"<<specialcharacters<<endl;
	
   return 0;	
}
