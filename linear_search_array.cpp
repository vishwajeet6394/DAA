#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main()
{
int t;
cin>>t;
while(t--)
{
int a[100],n,x,i,flag=0;
cout<<"Enter the size of array"<<endl;
cin>>n;
cout<<"Enter the element in array "<<endl;
for(i=0; i<n; i++)
cin>>a[i];
cout<<"Enter element to search: "<<endl;
cin>>x;
for(i=0; i<n; i++)
{
if(a[i]==x)
{
flag=1;
break;
}
}
if(flag)
cout<<"Present "<<i+1<<endl;
else
cout<<"Not Present "<<n<<endl;
    }
return 0;
}