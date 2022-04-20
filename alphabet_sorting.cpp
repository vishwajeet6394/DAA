#include<iostream>
using namespace std;

void count_sort(char arr[], int n)
{
    int count_array[256];
    for(int i=0; i<256; i++)
    {
         count_array[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        count_array[arr[i]]++;
    }
    int max=0; int pos=0;
    for(int i=0; i<256; i++)
    {
        if(max<count_array[i])
        {
            max=count_array[i];
            pos=i;
        }
    }
    cout<<char(pos)<<" "<<max<<endl;
}
int main()
{
    int n;
    cin>>n;
    char arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    count_sort(arr, n);
}