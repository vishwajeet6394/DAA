#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
 int max_of_four(int a, int b, int c, int d)
 {
  
  
  /*   int max = a;
     if(max<b)
       max=b;
      if(max<c)
       max=c;
       if(max<d)
       max=d;
       return max;
         */
        if(a>b && a>c && a>d)
        return a;
        else if(b>a && b>c && b>d)
        return b;
        else if(c>a && c>b && c>d)
        return c;
        else
        return d;
 }

int main() {
    int a, b, c, d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    int max_num=max_of_four(a,b,c,d);
    cout<<max_num;
    return 0;
}