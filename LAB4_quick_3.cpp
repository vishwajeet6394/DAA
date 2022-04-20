#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[], int l, int r)
{
    int i = l - 1;
    int pivot = arr[r];
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}
int quick_sort(int arr[], int l, int r, int k)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
         if(pi==k-1)
         {
             return arr[pi];
         }
         if(pi>k-1)
        {
        quick_sort(arr, l, pi - 1,k);
        }
        if(pi<k-1)
        quick_sort(arr, pi + 1, r,k);
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
    int l = 0, r = n - 1,k;
    cin>>k;
   int result= quick_sort(arr, l, r,k);
    cout<<"Sorted array are "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<"the 3rd smallest element are "<<arr[result];
    return 0;
}
// 10
// 123 656 54 765 344 514 765 34 765 234 