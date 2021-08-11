 #include<bits/stdc++.h>>
 #include<algorithm>
 #include<cmath>
 #include<vector>
  
  using namespace std;
  int jumpSearch(vector<int> v, int n, int key)
  {
   int m = sqrt(n);
    int previous =0;
    while(v.at(min(m,n)-1) < key)
    {
      previous = m;
      m= m + sqrt(n);
      if(previous >= n)
      {
        return -1;
        }
        }
        while(v.at(previous) < key)
        {
         previous++;
         if(previous == min(m,n))
         {
          return -1;
          }
          }
          if( v.at(previous) == key)
           return previous;
           
           return -1;
           }
   int main()
   {
    int t;
    cin>>t;
    while(t--)
    {
     int n,key;
     cin>>n;
     vector<int> v(n);
     for(int i=0; i<n; i++)
     {
      cin>>v[i];
      }
      sort(v.begin(), v.end());
      cout<<"Enter the key to search "<<endl;
      cin>>key;
      int index = jumpSearch(v, n, key);
      (index == -1) ? cout<< "Not Present "<< n : cout<< "Present "<<index << endl;
      return 0;
      }
      }
