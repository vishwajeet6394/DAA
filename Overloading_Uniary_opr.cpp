#include<iostream>
using namespace std;
 class Complex
 {
     private:
     int real;
     int imag;
     public:
     Complex(int real, int imag):real(real),imag(imag)
     {}
     Complex operator++(){
         ++real;
         ++imag;
         return *this;
     }
     Complex operator++(int)
     {
         Complex temp=*this;
         ++real;
         ++imag;
         return temp;
     }
     void print()
     {
         cout<<real<< " + "<<" i "<<imag<<endl;
     }
 };
  int main()
  {
      Complex c(3,4);
      c.print();
      ++c;
      c.print();
      Complex obj=c++;
      obj.print();
      c.print();

  }