#include<stdio.h>
#include<iostream>
using namespace std;
int x=1;
void mystery1(){
    static int x=50;
    cout << x++<<endl;

}
void mystery2()
{
    x=x*10;
    cout<<x<<endl;

}
int main()
{
    int x=5;
    {
        int x=7;
    }
    mystery1();
    mystery1();
    mystery2();
}