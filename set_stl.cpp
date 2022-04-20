#include<bits/stdc++.h>
#include<iostream>
#include<set>
#include<map>
#include<algorithm>

using namespace std;

  /*bool f(int x, int y)
 {
     return x>y;
 }
  */
 void setDemo()
 {
     set<int> s;
     s.insert(2);
     s.insert(-2);
     s.insert(1);
     s.insert(20);
     s.insert(12);

     for(int x : s)
     {
         cout<<x << " ";
     }
     cout<<endl;
     auto it =s.find(-2);
     if(it==s.end())
     {
         cout<<"Not present"<<endl;
     }
     else
     {
     cout<<"Present"<<endl;
     cout<< *it << endl;
     }
      auto it2 = s.upper_bound(-2);
      auto it3= s.upper_bound(0);
      cout<< *it2 <<" "<< *it3 <<endl;
       
       auto it4=s.upper_bound(20);
       if(it4==s.end())
       {
           cout<<"oops! sorry can not be find something like that "<<endl;
       }
     }
     void mapDemo()
     {
       map<int, int> a;
       a[1]=100;
       a[2]=89;
       a[54]=34;
       a[100005]=98;
        
        map<char,int> cint;
        string str="vishwajeet raj";
        for(char c : str)
        {
            cint[c]++;
        }
        cout<<cint['a']<< "  "<<cint['e']<<endl;  //this the frequency find out

     }
     int main()
     
     {
         setDemo();
         mapDemo();
     }
     
