#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int binary_Search(int arr[], int n, int key)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, key, f = 0, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                int sum = arr[i] + arr[j];
                // cout << sum << endl;
                key = binary_Search(arr, n, sum);
                if (key != -1)
                {
                    cout << i + 1 << " " << j + 1 << " " << key + 1 << endl;
                    f = 1;
                    break;
                }
            }
            if(f==1)
            {
                break;
            }
        }
        if (f == 0)
        {
            cout << "No sequence is found" << endl;
        }
    }
    return 0;
}
/*
1
10
24 48 71 86 89 92 120 194 201 
*/