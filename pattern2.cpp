    #include<iostream>
    using namespace std;
    int main()
    {
    int n;
    int space;
    cin>>n;
    int row=1;
    while(row<=n)
    {
     space=1;
    
    while(space<=n-row)
    {
        cout<<" ";
        space=space+1;
    }
    int value=row;
    while(value<=2*row-1)
    {
        cout<<value;
        value=value+1;
        
    }
    value=2*row-2;
    while(value>=row)
    {
        cout<<value;
        value=value-1;
    }
    cout<<"\n";
    row=row+1;
}
    return 0;
}








