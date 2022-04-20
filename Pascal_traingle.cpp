#include<iostream>
#include<vector>

using namespace std;
//print pascal traingle
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int pascal(int n,int r)
{
    int ans=fact(n)/(fact(n-r)*fact(r));
    return ans;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int t=pascal(i,j);
            cout<<t<<" ";
        }
        cout<<endl;
    }
}