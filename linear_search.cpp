#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,t,k,flag=0,i;
    cin>>t;
    while(t--)
    {
    int value;
    vector<int> v1;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>value;
        v1.push_back(value); 
    }
    cin>>k;
    int i;
    for( i=0; i<v1.size(); i++)
    {
     if(v1[i]==k)
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