#include <iostream>
#include <cstdio>
using namespace std;

void update(int *a,int *b) {
    // Complete this function 
    int temp=*a;
    *a= *a + *b;
    *b= temp - *b;
    if(*b<0)
     *b= *b * -1;
     cout<<*a<<endl;
    cout<<*b<<endl;
       
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
     cin>>a;
     cin>>b;
    update(pa, pb);
   // cout<<a<<endl;
    //cout<<b<<endl;

    return 0;
}