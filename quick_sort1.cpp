#include <iostream>
using namespace std;
int swapp=0;
int comp=0;
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    swapp++;
}

int partition(int arr[], int l, int h)
{
    int pivote = arr[h];
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        comp++;
        if (arr[j] < pivote)
        {
            i++;
            swap(arr, i, j);
            // swapp++;
        }
        
    }
        swap(arr, i + 1, h);
        // swapp++;
        return i + 1;
}
void quick_sort(int arr[], int l, int h)
{
    if (l < h)
    {
        int partitionIndex = partition(arr, l, h);
        quick_sort(arr, l, partitionIndex - 1);
        quick_sort(arr, partitionIndex + 1, h);
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
    quick_sort(arr, l, h);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<"  ";
    }
    cout<<endl;
    cout<<"swap "<<swapp<<endl;
    cout<<"comp "<<comp<<endl;
    return 0;
}
// 8
// 23 65 21 76 46 89 45 32
// 15
// 62 42 223 645 652 31 324 22 553 12 54 65 86 46 325         