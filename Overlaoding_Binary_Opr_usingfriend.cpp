#include<iostream>
using namespace std;
class Complex
{
  private:
  int real;
  int imag;
  public:
  Complex(int real=0, int imag=0){
     this->real=real;
     this->imag=imag;
  }
  friend Complex operator+(Complex const &, Complex const &);
  void print()
  {
      cout<<real<<"+ "<<"i "<<imag<<endl;
  }
};
   Complex operator+(Complex const &obj1, Complex const &obj2)
   {
       Complex result;
       result.real=obj1.real+obj2.real;
       result.imag=obj1.imag + obj2.imag;
       return result;
   }
   int main()
   {
       Complex c1(4,5), c2(5,6);
       c1.print();
       c2.print();
       Complex c3 = c1+c2;
       c3.print();
   }