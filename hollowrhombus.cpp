#include<iostream>
using namespace std;
int main() 
{
  int i,j,n;
  cin>>n;
  for(i=1;i<=n;i++)
  {
	  //print trailing spaces
	  for(j=1;j<=n-i;j++)
	  {
		  cout<<" ";
	  }
	  
	  //print stars and center spaces
	  for(j=1;j<=n;j++)
	  {
		  if(i==1||j==1||i==n||j==n)
		  {
			  cout<<"*";
		  }
		  else
		  {
			  cout<<" ";
		  }
	  }
	  cout<<"\n";
  }
  return 0;
}
