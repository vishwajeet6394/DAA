#include <iostream>
using namespace std;
void merging(int arr[], int LB, int mid, int UP)
{
    int n1 = mid - LB + 1;
    int n2 = UP - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[LB + i];
    }
    for (int j = 0; j < n2; j++)
    {
        b[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = LB;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void merge_sort(int arr[], int LB, int UP)
{
    int mid = 0;
    if (LB < UP)
    {
        mid = (LB + UP) / 2;
        merge_sort(arr, LB, mid);
        merge_sort(arr, mid + 1, UP);
        merging(arr, LB, mid, UP);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void array_sum(int arr[], int n, int key)
{
    int l = 0;
    int r = n - 1;
    int f=0;
    while (l < r)
    {
        if (arr[l] + arr[r] == key)
        {
            cout << arr[l] << " " << arr[r]<<" ";
            r--;
            f=1;
        }
        else if (arr[l] + arr[r] < key)
            l++;
        else if (arr[l] + arr[r] > key)
            r--;
            }
            if(f==0)
            cout << "No such pair exist " <<endl;
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
    int LB = 0, UP = n - 1;
    int key;
    cin >> key;
    merge_sort(arr, LB, UP);
    //printArray(arr, n);
    cout<<endl;
    array_sum(arr, n, key);
    return 0;
}
/*
10
54 65 34  76 78 97 45 32 51 21
8
23 65 21 76 45 89 45 32
*/
/*
10
64 28 97 40 12 72 84 24 38 10
*/