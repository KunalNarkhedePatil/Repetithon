#include<iostream>

using std::cout;
using std::endl;


class Date{
    private:

    int day;
    int month;
    int year;

    public:

    void init(int _day,int _month,int _year)
    {
        this->day=_day;
        this->month=_month;
        this->year=_year;
    }

    void show()
    {
        cout<<this->day<<"/"
            <<this->month<<"/"
            <<this->year<<endl;
    }
};

int main(void)
{
    int num=10;

    cout<<"num = "<<num<<endl;   //100

    Date myDate_ksn;  
    //There is no way(as of now )
    //to initialize an object of Date
    //We can add init() function to class

    myDate_ksn.init(9,2,2025);

    //add show() function

    myDate_ksn.show();  //9/2/2025

    return 0;
}

//At C++  syntax level
//allocate of memory to Date object is done by Date myDate_ksn

//Setting value for the first time is done by myDate_ksn.init(9,2,2025);

//These are two seperate steps and therefore
//do not come under category of initilization

//If we clould do some thing like
//Date myDate_ksn(9,2,2025)
//then it would come under initialization

//Date myDate_ksn(9,2,2025);
//After reading this line
//C++ should ,first allocate memory of 12 bytes
//for new object of class Date,name that memory
//block as myDate

//And then INTERNALLY SHOULD CALL init() function
//on myDate_ksn with 9,2,2025 as actual params