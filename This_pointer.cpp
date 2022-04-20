 #include<iostream>
 #include<string>
 using namespace std;
  
   class ThisPointer
   {
       private:
        int x;
        public:
        ThisPointer(int value=0) //default arugument concept.
        {
            x = value;      
        }
        void print()
        {
            cout<<"x= "<<x<<endl;  //Implicitly using this pointer
            cout<<"this->x "<<this->x<<endl;  //Explicitly using this pointer.
            cout<<"(*this).x "<<(*this).x<<endl;  //Explicitly using this pointer.
        }
   };
      int main()
      {
          ThisPointer t(30);
          t.print();
      }