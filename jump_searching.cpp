#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
   int jumpSearch(vector<int> v, int n, int key)
 {
     int m =sqrt(n);  //size of block which we jumped.
     int prev = 0;
     while (v.at(min(m,n) - 1) < key)  //concept of finding where the element find
     {
       prev = m;
       m = m +sqrt(n);
       if(prev >= n)
       {
           return -1;
       }
     }
     while(v.at(prev)< key)   //concept of finding key using linear search
     {
        prev++;
        if(prev == min(m,n))
          {
              return -1;
          }
     }
     if(v.at(prev) == key )
      return prev;

      return -1;

 }

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       vector<int> v;
       int key;
       int value, n;
       cin>>n;
       for(int i=0; i<n; i++)
       {
           cin>>value;
           v.push_back(value);
       }
       sort(v.begin(), v.end());
       cout<<"Enter the key element to search"<<endl;
       cin>>key;
       int index = jumpSearch(v, n, key);
       (index == -1)? cout<<"Not Present "<<n : cout<<"Present "<<index<<endl;

    }
    return 0;
}