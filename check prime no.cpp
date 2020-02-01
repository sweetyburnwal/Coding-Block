#include<iostream>
using namespace std;
bool check(int);
int main()
{
	if(check(38))
	   cout<<"no is prime";
	else
	   cout<<"no is not prime";
}
bool check(int n){
   for(int i=2;1<=n;i++){
   	if(n%i==0)
   	return false;
   }
    return true;
}
