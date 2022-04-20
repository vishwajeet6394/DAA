  #include<iostream>
  #include<string>
  using namespace std;
   
   class GradeBook
   {
      private:
         string coursename;
         int year;
         public:
         GradeBook()     //default constructor
         {
             string coursename= "CSE";
             int year =3;
         }
         GradeBook(string coursename, int year)  //parameterized constructor
         {
             this->coursename=coursename;
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
        GradeBook gb1;
        GradeBook gb2("Mechanical", 4);
        cout<<"Object 1 "<<gb1.getCourseName()<<" => "<<gb1.getYear()<<endl;
        cout<<"Object 2 "<<gb2.getCourseName()<<" => "<<gb2.getYear()<<endl;
        return 0;
    }