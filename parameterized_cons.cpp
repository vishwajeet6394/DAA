#include<iostream>
#include<string>
using namespace std;

 class GradeBook
 {
    private:
     string coursename;
     int year;
     public:
     GradeBook()
     {
         string coursename="CSE";
         int year = 3;
     }
       public:
       void setCourseName(std::string coursename)
     {
         this->coursename=coursename;
     }
      public:
      void setYear(int year)
     {
         this->year=year;
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
       GradeBook gb;
       cout<<"Before any changes the coursename and year "<<endl;
      cout<<gb.getCourseName()<<" => "<<gb.getYear()<<endl;
      cout<<"After changes the coursename and year "<<endl;
      gb.setCourseName("EC");
      gb.setYear(4);
      cout<<gb.getCourseName()<< " => " <<gb.getYear();
   }