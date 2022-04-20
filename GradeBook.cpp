 //Data Abstraction Example
#include<iostream>
using namespace std;
 
  class GradeBook
  {
      private:
      int age;
      public:
      void setYear(int age)  //In set Method there will be validation is exhist.
      {
          this->age = age;
      }
      void getYear()
      {
          cout<<"The age is "<<endl;
          cout<<age<<endl;
      }
  };
    int main()
    {
        GradeBook gb;
        gb.setYear(2);
       // cout<<"The age is "<<gb.getYear()<<endl;
       gb.getYear();
       return 0;
       
    }