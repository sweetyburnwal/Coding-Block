#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	//int n
	int n;
	cin>>n;
	int a1[1000],a2[1000];
	int i;
	int a3[1000];
	for(i=0;i<n;i++)
	{
		cin>>a1[i];
	}
	for(int j=0;j<n;j++)
	{
		cin>>a2[j];
	}
	sort(a1,a1+n);
	sort(a2,a2+n);
	int j=0;
	i=0;
    cout<<"[";
    bool first = 0;
	while(i<n && j<n)
	{
		if(a1[i]==a2[j])
		{
            if(first==0){
                cout<<a1[i];
                first=1;
            }
            else{
                cout<<", "<<a1[i];
            }
			i++;
			j++;
		}
		else if(a1[i]>a2[j])
		{
			j++;
		}
		else i++;
    }
   cout<<"]";
}
