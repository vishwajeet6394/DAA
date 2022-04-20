// time complexity O(n). 
#include<iostream>
using namespace std;

int fab(int n)    //Time complexity are (2 power n)
{
    if(n<=1)
    return n;
    else
    return fab(n-2)+fab(n-1);
}

int F[10];
int fib(int n)
{
    if(n<=1){
    F[n]=n;
    return n;
    }
    else
    {
        if(F[n-2]==-1)
        F[n-2]=fib(n-2);
        if(F[n-1]==-1)
        F[n-1]=fib(n-1);

        return F[n-2]+ F[n-1];
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
       F[i]=-1;
    }
    fib(n);
    fab(n);
     //cout<<fib(n)<<endl;
     cout<<fab(n)<<endl; 
    for(int i=0; i<n; i++)
    {
     //cout<<fib(i)<<endl;
     cout<<fab(i)<<" ";
    }
    return 0;
}