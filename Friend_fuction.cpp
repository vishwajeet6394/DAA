#include<iostream>
#include<string>
using namespace std;
  class Count
  {
      public:
      //friend void setX(Count &, int n);
       friend class ChangeX;
      private:
      int x;
      public:
      Count(int x=0)
      {
          this->x=x;
      }
      void printCount(){
          cout<<"this->x is "<<x<<endl;
      }
  };
   class ChangeX
   {
       public:
       void setX(Count &counter, int v)
    {
        counter.x=v;
        }
   };
    int main()
    {
        ChangeX ch;
        Count counter;
        counter.printCount();
       ch.setX(counter,10);
        counter.printCount();
        return 0;
    }