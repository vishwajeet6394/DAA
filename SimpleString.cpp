#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b,c;
    cin>>a>>b>>c;
     int len1=a.size();
     int len2=b.size();
     cout<<len1 << " " << len2 << endl;
     c=a+b;  // We can directly the string is concatinating .
     cout << c << endl;
     char temp;
     temp=a[0];
     a[0]=b[0];
     b[0]=temp;
     cout<<a << " "<<b;
    
  
    return 0;
}