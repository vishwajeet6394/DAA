#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        int i,j,k;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++) 
            {
                int result = v[i] + v[j];

                for(k=j+1 ; k<n; k++)
                {
                    if(result==v[k])
                    {
                        cout<<i <<" "<<j<<" "<<k <<endl;
                    }
                    else
                    cout<<"Not found"<<endl;
                }
            }
        }
    }
    return 0;
}
