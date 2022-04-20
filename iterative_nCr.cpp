#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    return 1;
    return fact(n-1)*n;
}
 int NCR(int n, int r, int p)
  {
    int result = n/(r*p);
    cout<<result<<endl; 
  }
   
   int main()
   {
       int n,r;
       cin>>n>>r;
       int t1=fact(n);
       int t2=fact(r);
       int t3=fact(n-r);
       NCR(t1,t2,t3);
       return 0;
   }