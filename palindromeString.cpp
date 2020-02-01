//palindrome

#include<iostream>
using namespace std;




bool palindrome(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!=s[s.length()-i-1])
		{
			return false;
		}
	}
	return true;
	
}

bool palindromeArray(int arr[],int n)
{
	cout<<n<<endl;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr[n-i-1])
		{
			return false;
		}
	}
	return true;
	
	
	
	
}

//int  subArray( string a)
//{
//	int count=0;
//	for(int i=0;i<a.length();i++)
//	{
//		for(int j=i;j<a.length();j++)
//		{
//			for(int k=i;k<=j;k++)
//			{
////				cout<<a[k];
//				if(palindrome(a[k])==true)
//				{
//					count = count+1;
//				}
//			}
//			cout<<endl;
//		}
//	}
//	return count;
//}




char toggle( char ch)
{
	return ch-'a'+'A';
}




int main()
{
	char c= 'f';
	char ans= toggle(c);
	cout<<ans;
	
	
//	string s= "abba";
//	subArray(s);

//	bool ans = palindrome(s);
//	cout<<ans;
	
	
//	int arr[]={5,3,4,4,3,5};
//	int n = sizeof(arr)/sizeof(arr[0]);
//	bool ans = palindromeArray(arr,n);
//	cout<<ans;
	return 0;
}


int reverse(int a)
{
	int rev=0;
	while(a>0)
	{
		
		rev=rev*10+a%10;
		a=a/10;
	}
	return rev;
}

bool palindromeInt( int a)
{
	int c= reverse(a);
	if(a==c)
	{
		return true;
	} else {
		return false;
	}
}


