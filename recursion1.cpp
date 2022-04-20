#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int sumNaturalRecursion(int n)
{
    if(n==0)
    return 0;
    else
    return sumNaturalRecursion(n-1) +n;
}
 int main()
 {
  int num;
  cin>>num;
  int result=sumNaturalRecursion(num);
  cout<<result<<endl;
  return 0;
 }