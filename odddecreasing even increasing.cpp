#include<iostream>
using namespace std;
int main() 
{
   int n;
   cin>>n;
   int oddcheck=n;
   int evencheck=n;
   while(oddcheck>=1)  //for odd print
   {
	   if(oddcheck%2==1)
	   {
		   cout<<oddcheck<<" ";
		   oddcheck=oddcheck-2;
	   }
	   else
	   {
		   oddcheck--;
	   }
   }
   int evenstart=2; //for even print
   while(evencheck>evenstart)
   {
	   if(evencheck%2==0)
	   {
		   cout<<evenstart<<" ";
		   evenstart=evenstart+2;
	   }
	   else
	   {
		   evencheck--;
	   }
   }
   return 0;
}
