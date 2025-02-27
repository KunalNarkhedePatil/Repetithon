#include<iostream>

using std::cout;
using std::endl;   //use this for '\n'

class Date{
    public:
    int day;
    int month;
    int year;

    void show()
    {
        cout<<"*****ENTER Date::show()****"<<endl;
        cout<<"Address of object used for making the current call:"<<this<<endl;
        cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
        cout<<"*****LEAVE Date::show()*****"<<endl;
    }

};


int main(void)
{
    //Define three local objects of class Date

    Date d1_ksn;
    Date d2_ksn;
    Date d3_ksn;

    //Define three pointer to class Date

    Date *pDate1=0;
    Date *pDate2=0;
    Date *pDate3=0;

    //Set the pointer to addresses

    pDate1=&d1_ksn;
    pDate2=&d2_ksn;
    pDate3=&d3_ksn;

    //Setting day month year of d1_ksn

    pDate1->day=2;
    pDate1->month=2;
    pDate1->year=2025;

    //Settinf day month year of d2_ksn

    pDate2->day=5;
    pDate2->month=6;
    pDate2->year=1990;

    //Setting day month year of d3_ksn

    pDate3->day=11;
    pDate3->month=12;
    pDate3->year=2028;


    cout<<"main():Making use of pointer pDate1 to make a call to Date::show()"<<endl;
    cout<<"main():Address of objects d1_ksn is :"<<pDate1<<endl;
    pDate1->show(); //==Date::show(&d1_ksn);//formal parameter will be this pointer

    cout<<"main():Making use of pointer pDate2 to make a call to Date::show()"<<endl;
    cout<<"main():Address of objects d2_ksn is :"<<pDate2<<endl;
    pDate2->show(); //Date::show(&d2_ksn);//formal parameter will be this pointer

    cout<<"main():Making use of pointer pDate3 to make a call to Date::show()"<<endl;
    cout<<"main():Address of objects d3_ksn is "<<pDate3<<endl;
    pDate3->show();//Date::show(&d3_ksn); /formal paramter will be this pointer

    return (0);


}