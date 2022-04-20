#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
     return 1;
     else
     return fact(n-1)*n;
}
 int nCr(int n, int r)
 {
     if(r==0 || r==n)
      return 1;
      else
      return nCr(n-1,r-1) + nCr(n-1,r);
 }

  int main()
  {
      int n,r;
      cin>>n>>r;
        fact(n);
        fact(r);
        int result= nCr(n,r);
        cout<<result<<endl;
  }