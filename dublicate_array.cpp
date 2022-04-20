#include<iostream>
using namespace std;

void dublicate_array(int temp[], int n)
{
    int j=0;
    for(int i=0; i<=n-1; i++)
    {
      if(temp[i]!=temp[i+1])
      {
          temp[j]=temp[i];
          j++;
      }
      
    }
    temp[j]=temp[n-1];
    int size = sizeof(temp)/sizeof(temp[0]);
    for(int i=0; i<size; i++)
    {
      cout<<temp[i]<<" ";
    }
   
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    dublicate_array(arr, n);
    return 0;
}