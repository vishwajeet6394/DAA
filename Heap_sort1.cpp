#include<iostream>
using namespace std;
void insert(int A[], int n){
    int i=n; 
    int temp=A[i];
    while(i>0 )
    {
        if( temp>A[(i-1)/2])
    {
        A[i]=A[(i-1)/2];
        i=(i-1)/2;
    } 
      }
    A[i]=temp;
    }
int main()
{
    int n;
    cin>>n;
    int H[n];
    for(int i=0; i<n; i++)
    {
        cin>>H[i];
    }
    for(int i=1; i<=n-1; i++)
    {
    insert(H,i);
    }
    for(int i=0; i<=n-1; i++)
    {
      cout<<H[i]<<" ";
    }
     
    return 0;
}