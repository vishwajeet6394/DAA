#include<iostream>
using namespace std;

 void increament(int n)
 {
     if(n>0)
    // cout<<n<<endl;
    increament(n-1);
    cout<<n<<endl;
}
  int main()
  {
      int n;
      cin>>n;
     increament(n);
}