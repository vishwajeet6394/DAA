#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> ans;
     for(int i=0; i<n; i++)
     {
         int t;
         cin>>t;
         ans.push_back(t);
     }
     int pos=0;
    for(int i=0; i<ans.size(); i++)
    {
       for(int j=i+1; j<ans.size(); j++)
       {
          if(ans[i]>ans[j])
          {
              int temp=ans[i];
           ans[i]=ans[j];
           ans[j]=temp;
          }
       }
     }
    for(int i=0; i<ans.size(); i++)
       {
           cout<<ans[i];
       }
    return 0;
}