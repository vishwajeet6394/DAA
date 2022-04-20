#include<stdio.h>

int x=1;
void mystery1(){
    static int x=50;
    // cout << x++<<endl;
    printf(x++);

}
void mystery2()
{
    x=x*10;
    // cout<<x<<endl;
    printf(x);

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