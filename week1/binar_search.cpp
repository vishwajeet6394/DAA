#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int binarySearch(int arr[], int left, int right, int value)
{
 while(left <= right)
 {
   int mid = left + (right - left )/2;
    if(arr[mid] == value)
     return mid;
     else if(arr[mid] < value)
       left = mid + 1;
       else 
       right =mid -1;
       }
       return -1;
    }
    
     int main()
     {
       int t;
        cin>>t;
        while(t--)
        {
          int n,key;
          cin>>n;
          int arr[n];
          for(int i =0; i<n; i++)
          {
            cin>>arr[i];
            }
           cout<<"Enter the key element "<<endl;
           cin>>key;
           int index = binarySearch(arr, 0, n-1, key);
           (index == -1)? cout<<"Not Present "<<n : cout<<"Present "<<index;
           }
           return 0;
           }
       
   
