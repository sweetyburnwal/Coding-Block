#include<iostream>
using namespace std;
void towerOfHanoi(int n,char source,char helper,char destination)
{
	//base case
	if(n==0)
	{
		return;
	}
	//recursive case
	//step1-move n-1 disks from source(src) to helper
	towerOfHanoi(n-1,source,destination,helper);
	
	cout<<"move "<<n<<" th disk from "<<source<<" to "<<destination<<endl;

	towerOfHanoi(n-1,helper,source,destination);
}
int main()
{
	int n;
	cin>>n;
	char source='A',helper='B',destination='C';
	towerOfHanoi(n,'A','B','C');
	return 0;
}
