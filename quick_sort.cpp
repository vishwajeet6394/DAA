#include <iostream>
using namespace std;
int comp = 0;
int swapp = 0;
int partition(int arr[], int l, int h)
{
    int pivote = arr[l];
    int i = l, j = h, t = 0;
    while (i < j)
    {
        
        while (arr[i] <= pivote && i < j)
        {
           i++;
        }
        while (arr[j] > pivote)
        {
            j--;
        }
        if (i < j)
        {
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    arr[l] = arr[j];
    arr[j] = pivote;
    return j;
}
void quick_Sort(int arr[], int l, int h)
{
    if (l < h)
    {
        int loc = partition(arr, l, h);
        quick_Sort(arr, l, loc - 1);
        quick_Sort(arr, loc + 1, h);
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
    int l = 0, h = n - 1;
    quick_Sort(arr, l, h);
    cout << "Print sorted array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "comparision " << comp << endl;
    cout << "swap " << swapp << endl;
    return 0;
}
/*
8
60 40 20 95 90 30 50 70
23 65 21 76 46 89 45 32
*/