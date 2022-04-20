/*For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
 */
#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    // Complete the code.
     string str[] = {"","one","two","three","four","five","six","seven","eight","nine"};
      int a,b;
    cin>>a;
    cin>>b;
    for(int i = a; i <= b; i++)
    {
       if(i <= 9)cout << str[i] << endl;
        else{
            if(!(i%2))
            cout << "even" << endl;
            else cout << "odd" << endl;
        }
    } 
    return 0;
}