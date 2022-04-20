#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>

using namespace std;

 bool f(int x, int y)  //comparator fuction when print in reverse order.
 {
     return x>y;
 }
 int main()
 {
     vector<int> v ={2,43,34,12,54,65};
     sort(v.begin(), v.end());
     bool present= binary_search(v.begin(),v.end(), 34);
     present= binary_search(v.begin(), v.end(), 54);
     v.push_back(100);
     present = binary_search(v.begin(), v.end(), 100);
     v.push_back(100);
     v.push_back(100);
     v.push_back(100);
     v.push_back(123);
     //vector<int>::iterator t1=lower_bound(v.begin(),v.end(),100); //<=
     //vector<int>::iterator t2=upper_bound(v.begin(), v.end(),100); //>
     auto  t1=lower_bound(v.begin(),v.end(),100); //<=
     auto  t2=upper_bound(v.begin(), v.end(),100); //>
     cout<<*t1<<" "<<*t2<<endl;
     cout<<t2-t1<<endl;  //4 represent how many times 100 comes;
      
      sort(v.begin(), v.end(), f); //print the vector in desecending order;
      
      //how to print the vector ? by using iterator;

     // vector<int> :: iterator t3;

     /* for(t3=v.begin(); t3!=v.end(); t3++)
      {
          cout<<*t3 << " ";
      }
      cout<<endl;
      */
     for(int &x : v)
     {
         x++;
     }
     for(int x: v)
     {
         cout<< x << " ";
     }
     cout<<endl;

 }