#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int binarySearch(int arr[], int n, int key, int searchFirst)
{
 int low=0, high=n-1;
  int result = -1;
  while(low<=high)
  {
     int mid = (low +high)/2;
     if(arr[mid]==key)
      {
        result = mid;
        if(searchFirst)
          {
           high= mid -1;
           }
           else
           {
            low = mid +1;
            }
            }
            else if(arr[mid] < key)
            {
              low= mid +1;
              }
              else
              {
               high= mid -1;
               }
               }
               return result;
               }
 
 int main()
 {
  int t;
  cin>>t;
  while(t--)
  {
   int key,n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++)
   {
     cin>>arr[i];
     }
    cout<<"Enter the number to be find"<<endl;
    cin>>key;
    int first = binarySearch(arr, n, key, 1);
    int last = binarySearch(arr, n, key, 0);
     
     int count = last - first + 1;
     if(first ==-1)
      cout<<"Not Present "<<endl;
      else
       cout<<" Present "<<count<<endl;
     }
     return 0;
       }
    
