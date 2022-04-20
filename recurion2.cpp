#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int factRecursion(int n)
{
    if(n==0)
    return 1;
    else
    return factRecursion(n-1)*n;
}
 int main()
 {
     int num;
     cin>>num;
     int result=factRecursion(num);
     cout<<result<<endl;
     return 0;
 }