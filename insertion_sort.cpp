#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    int i,j,key,comp=0,shift=0;
    for(i=1; i<n; i++)
    {
        key=arr[i];
        j=i-1;
         while(j>=0 && key< arr[j])
        {
             comp++;
            arr[j+1]=arr[j];
            j=j-1;
            shift++;
        }
        arr[j+1]=key;
        shift++;
    }
    cout<<comp<<" "<<shift<<endl;
}
 void printArray(int arr[], int n)
 {
     for(int i=0; i<n; i++)
     {
         cout<<arr[i]<<" ";
        
     }
 }
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
     int n;
     cin>>n;
     int arr[n];
     for(int i=0; i<n; i++)
     {
         cin>>arr[i];

     }
     insertionSort(arr, n);
     cout<<"Print sorted array"<<endl;
     printArray(arr,n);
     return 0;
     }
 }
 /*

 8
 -23 65 -31 76 46 89 4 32
*/