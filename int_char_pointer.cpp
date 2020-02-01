#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4};
	int i=10;
	int *ptr=&i;
	cout<<ptr<<endl;
	
	char c='A';
	char*chptr=&c;
	cout<<(int*)chptr<<endl;
	
	return 0;
}
