#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool checkStringExist(string arr[], string word, int n);
int indexprint(string arr[], string word, int n);
int main()
{
	string arr[4]= {"amit","sumit","rohit","rahul"};
	sort(arr,arr+4);
	string s = "rohit";
//	cout<<arr[3];   //maximum
	bool ans= checkStringExist(arr,s,4);
	int index= indexprint(arr,s,4);
	cout<<index<<endl;
	cout<<ans;
}
bool checkStringExist(string arr[], string word, int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i].compare(word)==0)
		{
			return true;
		}
	}
	return false;
}
int indexprint(string arr[], string word, int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i].compare(word)==0)
		{
			return i;
		}
	}
	return -1;
}
