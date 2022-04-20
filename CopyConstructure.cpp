#include<iostream>
using namespace std;
 class Point
 {
     private:
     int x,y;
     public:
     Point(int x, int y):x(x),y(y){}
     Point(const Point &p2)
     {
         x=p2.x;
         y=p2.y;
     }
     void print()
     {
         cout<<" x "<<" = "<<x<<" y = "<<y<<endl;
     } 
 };
   int main()
   {
       Point p2(2,4);
       Point p1=p2;  //Copy constructure always pass the reference of old object to constructor
       p1.print();   //
       p2.print();
       
   }