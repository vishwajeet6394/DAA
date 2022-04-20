#include<iostream>
#include<string>
using namespace std;
  
  class ComplexNumber
  {
      private:
      int v1;
      int v2;
      public:
      ComplexNumber(int v1=0, int v2=0)
      {
          this->v1=v1;
          (*this).v2=v2;
      }
      int getV1()
      {
          return v1;
      }
      int getV2()
      {
          return v2;
      }
      ComplexNumber addObject(ComplexNumber c2)
      {
          ComplexNumber temp;
          temp.v1=v1+c2.v1;
          temp.v2=v2+c2.v2;
          return temp;
      }
  };
  int main()
  {
      ComplexNumber c1(3,4);
      ComplexNumber c2(4,5);
       ComplexNumber t=c1.addObject(c2);
       cout<<t.getV1()<<"+ "<<t.getV2()<<"i "<<endl;
  } 