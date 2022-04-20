#include<iostream>
#include<string>
using namespace std;
 class GradeBook
 {
     private:
     string coursename;
     int year;
     public:
      
     GradeBook(string coursename="Mechanical", int year=2)//Constructor with default argument.
    // GradeBook(string coursename, int year=2) //give error
     {
         this->coursename=coursename;
         this->year = year;
     }
     string getCourseName()
     {
         return coursename;
     }
     int getYear()
     {
         return year;
     }
 };
      int main()
      {
          GradeBook gb1;
          GradeBook gb2("CSE", 5);
         // GradeBook gb3("IT");
          cout<<"Object 1 "<<gb1.getCourseName()<<" => "<<gb1.getYear()<<endl;
          cout<<"Object 2 "<<gb2.getCourseName()<<" => "<<gb2.getYear()<<endl;
          // cout<<"Object 3 "<<gb1.getCourseName()<<endl;
      }