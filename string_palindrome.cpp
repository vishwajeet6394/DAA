#include<iostream>
using namespace std;
 bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A'&& s[i]<='Z' || s[i]>='a' && s[i]<='z' || s[i]>=48 && s[i]<=57)
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    s[i]=s[i]+32;
                }
                ans.push_back(s[i]);
            }
        }
        cout<<ans<<endl;
            int j=ans.size()-1;
            for(int i=0;i<ans.size()/2;i++)
            {
                if(s[i]!=s[j])
                {
                    return false;
                }
                j--;
            }
        cout<<ans<<endl;
        return true;
    }
int main()
{
    string s;
    getline(cin,s);
    cout<<isPalindrome(s);
}
/*
"A man, a plan, a canal: Panama"
*/