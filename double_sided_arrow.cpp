#include <iostream>

using namespace std;

int main()
{
    int i,j,num,spaces,n,spaces1=1;
    //cout<<"Enter the number of rows";
    cin>>n;
    num=n;
    spaces=n*4;
    for(i=1;i<=n/2+1;i++)
    {
        j=1;
        while(j<=spaces)
        {
            cout<<" ";
            j++;

        }
        if(i==1)
        {
            for(j=i;j>=1;j--)
            {
            cout<<" "<<j;

            }


        }
        else
    {


        for(j=i;j>=1;j--)
        {
            cout<<j;

        }
        j=1;
        while(j<=spaces1)
        {
            cout<<" ";
            j++;

        }
         for(j=1;j<=i;j++)
        {
            cout<<j;

        }
    }
        spaces=spaces-2;
        spaces1=spaces1+2;
        cout<<"\n";
    }
spaces=spaces+2;
spaces1=spaces1-2;
for(i=n/2;i>1;i--)
{
        j=1;
        while(j<=spaces+1)
        {
            cout<<" ";
            j++;

        }
    for(j=i;j>=1;j--)
        cout<<j;
     j=1;
    while(j<=spaces1)
    {
            cout<<" ";
            j++;

    }
     for(j=1;j<=i;j++)
        cout<<j;
    spaces=spaces+2;
    spaces1=spaces1-2;
    cout<<"\n";
}
spaces=spaces+2;
for(i=1;i<=1;i++)
{
     j=1;
        while(j<=spaces+1)
        {
            cout<<" ";
            j++;

        }
    cout<<i;
    cout<<"\n";


}
    return 0;
}

