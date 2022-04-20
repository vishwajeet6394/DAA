#include<bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;

int powerRecursion(int n, int m)
{
   if(m==0)
   return 1; 
   else
   return powerRecursion(n,m-1)*n;
    /*if(m%2==0)         //for even number logic
   return powerRecursion(n*n,m/2);
    
   else
   return n*powerRecursion(n*n,(m-1)/2); //for odd power number logic
    //return powerRecursion(n,m-1)*n; 
    */
}
int main()
{
    int n,m;
    cin>>n>>m;
    int result=powerRecursion(n,m);
    cout<<"The result is :"<< result<<endl;
    return 0;
}