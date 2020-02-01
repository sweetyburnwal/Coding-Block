#include<iostream>
using namespace std;
void readLine(char *ch,char delimiter='\n')
{
	int i=0;
	char ch1;
	ch1=cin.get();
	while(ch1!=delimiter)
	{
		//if(i<length)
		ch[i++]=ch1;
		//i++;
		ch1=cin.get();
	}
	ch[i]='\0';
	return;
}
int main()
{
	char ch[1000];
    readLine(ch);
    cout<<ch<<endl;
    return 0;
}
