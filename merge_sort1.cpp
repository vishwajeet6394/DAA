#include<iostream>
using namespace std;
void merge(int arr[], int l, int mid, int h)
{
    int n1=mid-l+1;
    int n2=h-mid;
    int a[n1],b[n2];
    for(int i=0; i<n1; i++)
    {
        a[i]=arr[l+i];
    }
    for(int j=0; j<n2; j++)
    {
        b[j]=arr[mid+1+j];
    }
     int i=0, j=0, k=l;
     while(i<n1 && j<n2)
     {
         if(a[i]<=b[j])
         {
             arr[k]=a[i];
             k++;
             i++;
         }
         else{
             arr[k]=b[j];
             k++;
             j++;
         }
         }
         while(i<n1)
         {
             arr[k]=a[i];
             k++;
             i++;
         }
         while(j<n2)
         {
             arr[k]=b[j];
             k++;
             j++;
         }
     

}

void  mergeSort(int arr[], int l, int h)
{
    int mid=0;
    if(l<h)
    {
        mid=(l+h)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr,mid+1,h);
        merge(arr, l, mid,h);
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
    int l=0, h=n-1;
     mergeSort(arr, l,h);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    // cout<<1inver;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            cout<<"Yes "<<endl;
            return 0;
        }
    }
    cout<<"NO "<<endl;
    return 0;
}