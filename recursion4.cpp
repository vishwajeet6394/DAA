#include<bits/stdc++.h>
#include<iostream>

using namespace std;
double tylorRecursion(int n, int m)
{
  static double p=1,fact=1;
  double res;
  if(m==0)
   return 1;
   res=tylorRecursion(n,m-1);
   p=p*n;
   fact=fact*m;
   return res+p/fact;

}

int main()
{
    int n,m;
    cin>>n>>m;
    double result=tylorRecursion(n,m);
    cout<<"Result is : "<<result<<endl;
    return 0;
}