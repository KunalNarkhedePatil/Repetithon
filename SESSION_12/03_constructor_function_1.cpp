#include<iostream>

using std::cout;
using std::endl;

class Date
{
   private:

   int day;
   int month;
   int year;

   public:

   //CONSTRUCTOR FUNCTION

   Date(int _day,int _month,int _year)
   {
     this->day=_day;
     this->month=_month;
     this->year=_year;
   }

   void show()
   {
      cout<<day<<"/"<<month<<"/"<<year<<endl;
   }
};

int main(void)
{
    Date myDate_ksn(9,2,2025);

    //12 bytes memory block will be allocated to Date obejct
    //Make call to Date::Date(addr_of_new_object,9,2,2025)
    myDate_ksn.show();    //Date::show(&myDate_ksn)

    return (0);
}