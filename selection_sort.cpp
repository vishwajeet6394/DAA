#include<iostream>
using namespace std;
 
 void selectionSort(int arr[], int n)
 {
     int min=0, pos=0,swap=0, comp=0;
     for(int i=0; i<n-1; i++)
     { 
         swap++;
         min=arr[i];
         pos=i;
         for(int j=i+1; j<n; j++)
         { 
             comp++;
             if(arr[j]<min)
             {
                 min=arr[j];
                 pos=j;
             }
         }
         if(pos!=i)
         {
             arr[pos]=arr[i];
             arr[i]=min;
         }
     }
     cout<<comp<<"  "<<swap<<endl;
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
         selectionSort(arr, n);
         cout<<"Print shorted array "<<endl;
         printArray(arr,n);
         return 0;
     }
     }
