#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int nst=1;
	int rows=1;
	int fibo1=0;
	int fibo2=1;
	while(rows<=n)
	{
		int cst=1;
		while(cst<=nst)
		{
			cout<<fibo1<<" ";
			int fibo3=fibo1+fibo2;
			fibo1=fibo2;
			fibo2=fibo3;
			cst++;
		}
		rows++;
		nst++;cout<<endl;
	}
	return 0;
}
