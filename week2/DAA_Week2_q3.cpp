#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int pairKeyDifference(int arr[], int n, int key)
{
  int count=0;
  for(int i=0; i<n; i++)
  {
      for(int j=i+1; j<n; j++)
      {
         if(arr[j]-arr[i]==key)
         {
             count++;
         }
      }
  }
   return count;
}


int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],numberkey;
        for(int i=0; i<n; i++)
        {
          cin>>arr[i];
        }
         sort(arr,arr+n);
        cin>>numberkey;
        int result = pairKeyDifference(arr,n,numberkey);
        cout<<result<<endl;
    }
}