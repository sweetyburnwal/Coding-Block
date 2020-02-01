#include<iostream>
using namespace std;
bool check (int);
int main()
{
for(int i=2;i<=100;i++)
{
	if(check(i))
	cout<<"number is prime"<<i<<endl;
}
}
bool check(int number){
	for(int i=2;i<=number;i++)
	{
		if(number%i==0)
		{
			return false;
		}
	}
return true;
}
