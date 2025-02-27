#include<iostream>

using std::cout;
using std::endl;

class Date{
    int day;
    int month;
    int year;

    public:

    //CONSTRUCTOR FUNCTION

    Date(int _day,int _month,int _year)
    {
        cout<<"*******Date CONSTRUCTOR ENTER******"<<endl;

        cout<<"Address of newly allocated object:"<<this<<endl;

        this->day=_day;
        this->month=_month;
        this->year=_year;

        cout<<"******Date CONSTRUCTOR LEAVE*****"<<endl;
    }

    void show()
    {
        cout<<"******Date::show() ENTER*******"<<endl;

        cout<<"Address of object whose members must be shown:"<<this<<endl;
        cout<<"******Date::show() LEAVE********"<<endl;
    }
};

int main(void)
{
    //Memory allocation of 12 bytes of stack frame of main() + call to constructor

    Date myBirthDate_ksn(20,7,1986);

    //Memory allocation of 12 bytes of stack frme of main() + call to constructor
    
    Date cpaBirthDate_ksn(1,12,2009);

    cout<<"main():address of myBirthDate_ksn:"<<&myBirthDate_ksn<<endl;
    cout<<"main():Address of cpaBirthDate_ksn:"<<&cpaBirthDate_ksn<<endl;

    cpaBirthDate_ksn.show();
    myBirthDate_ksn.show();


    return (0);


}