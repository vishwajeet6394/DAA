#include<iostream>
#include<string>
using namespace std;
 class Student
 {
     private:
      static int count;
     protected:
      static string UniversityName;
     public:
      static int noOfDept;
    public:
    static void setUniversityName(string universityname)
    {
       UniversityName=universityname;
    }
    static void setCount(int cnt)
    {
        count=cnt;
    }
    static string getUniversityName(){
        return UniversityName;
    }
    static int getCount()
    {
        return count;
    }
 };
  int Student::count=5000;
  string Student::UniversityName="IIT Roorkee";
  int Student::noOfDept=20;
  int main()
  {   
      Student st1,st2;
      
       cout<<"noOfDepartment = "<<Student::noOfDept<<endl;
       cout<<"Name of Univeristy = "<<Student::getUniversityName()<<endl;
       cout<<"Number of Student = " <<Student::getCount() <<endl;
       st1.setUniversityName("IIT Madras ");
      st1.setCount(6000);
      //st2.setUniversityName("IIT Bombay");
       //st2.setCount(7000);
       cout<<"After changes Student 1 "<<endl;
       cout<<st1.getCount()<<endl;
       cout<<st1.getUniversityName()<<endl;
       cout<<"After changes Student 2 "<<endl;
       cout<<st2.getCount()<<endl;
       cout<<st2.getUniversityName()<<endl;
       return 0;

  }