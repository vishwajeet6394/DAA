#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int facb(int n)
{
    if(n<=1)
    return 1;
     else
     return facb(n-2)+facb(n-1);
}
 int main()
 {
     int n;
     cin>>n;
     int result = facb(n);
     cout<<"Result "<<result<<endl;
     return 0;
 }