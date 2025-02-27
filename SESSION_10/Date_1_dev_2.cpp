#include<iostream>

using std::cout;
using std::endl;

class Date{
    public:

    int day;
    int month;
    int year;

    void show()
    {
        cout<<"*****ENTER Date::show()*****"<<endl;
        cout<<"Address of objects used for making the current call"<<this<<endl;
        cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
        cout<<"*****LEAVE Date::show()*****"<<endl;

    }
};

int main(void)
{
    Date d1_ksn;
    Date d2_ksn;
    Date d3_ksn;

    //Setting day month year of d1_ksn

    d1_ksn.day=2;
    d1_ksn.month=2;
    d1_ksn.year=2025;

    //Setting day month year of d2_ksn


    d2_ksn.day=5;
    d2_ksn.month=6;
    d2_ksn.year=1990;

    //Setting day month year of d3_ksn

    d3_ksn.day=11;
    d3_ksn.month=12;
    d3_ksn.year=2028;


    cout<<"main():Making use of obejct d1_ksn a call to Date::show()"<<endl;
    cout<<"main():Address of object d1_ksn is:"<<&d1_ksn<<endl;
    d1_ksn.show();   //==Date::show(&d1_ksn)//formal parameter will be this parameter


    cout<<"main():Making use of object d2_ksn a call to Date::show()"<<endl;
    cout<<"main():Address of object d2_ksn is:"<<&d2_ksn<<endl;
    d2_ksn.show();   //==Date::show(&d2_ksn)//formal paramter will be the this pointer

    
    cout<<"main():Making use of object d3_ksn a call to Date::show()"<<endl;
    cout<<"main():Address of object d3_ksn is:"<<&d3_ksn<<endl;
    d3_ksn.show();//==Date::show (&d3_ksn)//formal paramter will be the this pointer

    return (0);


}