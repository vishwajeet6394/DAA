#include <iostream>
using namespace std;

int findMax(int arr[], int n)
{
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
void count_Sort(int arr[], int n)
{
     int max = findMax(arr, n);
    // int* count_array=new int[max+1];
    int count_array[max];

    for(int i=0; i<=max; i++)  //i<max+1
    {
        count_array[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        count_array[arr[i]]++;
    }
    int i=0,j=0;
    while(i<max+1)
    {
        if(count_array[i]>0)
        {
          arr[j++]=i;
          count_array[i]--;
        }
        else
        i++;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    count_Sort(arr, n);
    cout<<"The sorted array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    cout<<endl;
    return 0;
}
// 10
// 6 3 9 10 15 6 8 12 3 6