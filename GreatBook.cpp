#include<iostream>
using namespace std;

class GreatBook
{
    private:
    int year;
    public:
    void setYear(int year)
    {    
        if(year>0 && year !=0)
        {
        this->year=year;
        }
        else
        cout<<"Enter the valid year "<<endl;
    }
    int getYear()
    {
        return year;
    }
};
  int main()
  {
      int yr=0;
    GreatBook gb;
    cout<<"Enter the valid year"<<endl;
    cin>>yr;
    gb.setYear(yr);
    int sum=gb.getYear();
    cout<<"Year is "<<sum<<endl;
  }