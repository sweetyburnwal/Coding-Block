#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
       int space=1;
       while(space<=n-row)
    {
        cout<<" ";
        space=space+1;
    }
    int number=1;
    while(number<=2*row-1)
    {
        cout<<number;
        number=number+1;
    }
    cout<<"\n";
    row=row+1;
}
    return 0;
}

