#include<iostream>

class Date
{
    public:

    typedef int day_t;
    typedef int month_t;
    typedef int year_t;

    private:

    day_t day;
    month_t month;
    year_t year;

    public:

    Date(day_t init_day,month_t init_month,year_t init_year)
    {
        day=init_day;
        month=init_month;
        year=init_year;
    }

    day_t get_day()
    {
        return day;
    }

    month_t get_month()
    {
        return month;
    }

    year_t get_year()
    {
        return year;
    }
};

int main(void)
{
    Date myDate_ksn(15,2,2025);

    Date::day_t day=myDate_ksn.get_day();  //Date::get_day(&myDate_ksn);
    Date::month_t month=myDate_ksn.get_month();   //Date::get_month(&myDate_ksn);
    Date::year_t year=myDate_ksn.get_year();      //Date::get_year(&myDate_ksn)

    return (0);
}