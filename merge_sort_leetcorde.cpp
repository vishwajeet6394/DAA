#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void merge_sort(vector<int>& num1, vector<int>& num2, int n, int m)
{
    int i = 0, j = 0;
    vector<int> temp;
    while (i < n && j < m)
    {
        if (num1[i] < num2[j])
        {
            temp.push_back(num1[i]);
           
            i++;
        }
        else
        {
            temp.push_back(num2[j]);
           
            j++;
        }
    }
    while (i < n)
    {
        temp.push_back(num1[i]);
      
        i++;
    }
    while (j < m)
    {
        temp.push_back(num2[j]);
    
        j++;
    }
    for(int i=0; i<n+m; i++)
    {
       cout<<temp[i]<<" ";
    }
}
int main()
{
    int n, m;
    cin >>n>>m;
    vector<int> num1;
    vector<int> num2;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        num1.push_back(t);
    }
    for (int j = 0; j < n; j++)
    {
        cin>>t;
        num2.push_back(t);
    }
    merge_sort(num1, num2, n, m);
    return 0;
}