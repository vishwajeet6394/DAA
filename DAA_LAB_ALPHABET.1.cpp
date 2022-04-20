#include<iostream>
using namespace std;

void vish(char a[],int n)
{
    int count[26]={0};
    for(int i=0;i<n;i++)
    {
        int p=a[i];
        p=p-97;
        count[p]++;
    }
    int max=0,pos=0;
    for(int i=0;i<26;i++)
    {
        if(max<count[i])
        {
            max=count[i];
            pos=i+97;
        }
    }
    cout<<char(pos)<<" "<<max<<endl;
}


int main()
{
    int n;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vish(a,n);
}
/*
10
a e d w a d q a f p
20
g t l l t c w a w g l c w d s a a v c l

*/