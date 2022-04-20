#include <iostream>
using namespace std;
void common_array(int arr1[], int arr2[], int n, int m)
{
    int k = 0;
    int i = 0, j = 0;
    // int f = 0;
    int outputArray[k];
    while (i < n)
    {
        while (j < m)
        {
            if (arr1[i] == arr2[j])
            {
                outputArray[k] = arr1[i];
                k++;
                i++;
                j++;
            }
            else if (arr1[i] < arr2[j])
            {
                i++;
            }
            else if (arr1[i] > arr2[j])
            {
                j++;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << outputArray[i] << " ";
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    for(int j=0; j<m; j++)
    {
        cin>>arr2[j];
    }
    common_array(arr1, arr2, n, m);
    return 0;
}