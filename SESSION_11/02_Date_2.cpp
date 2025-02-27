//REVISION CODE

#include<iostream>

using std::cout;

using std::endl;

class Date
{
    public:
    int day;
    int month;
    int year;

    void show(Date *pDate)
    {
        cout<<pDate->day<<"/"<<pDate->month<<"/"<<pDate->year<<endl;
    }

};

int main(void)
{
    Date myDate_ksn;        //dau ,month,year
    Date d1_ksn;           //day ,month ,year

    myDate_ksn.day=8;
    myDate_ksn.month=2;
    myDate_ksn.year=2025;

    d1_ksn.day=11;
    d1_ksn.month=3;
    d1_ksn.year=2025;


    Date::show(&myDate_ksn);
    Date::show(&d1_ksn);
}


class C
{
    public:
    //f() exists to algorithmically process an objects of class C
    void f()
    {
        //Which object of class C will be processed in the current 
        //call of C::f()
    }
};

class YourClassName{
    private:
    int a;
    char b;
    float c;
    public:

    //YourClassName * this->FIRST FORMAL PARAMETER

    void YourFunctionName(int m,int n)
    {
        this->data_member
        this->function_member


        this->a;
        this->b;
        this->c
    }
};

int main()
{
    YourClassName YourObjectName_ksn;

    YourClassName:: YourFunctionName(&YourObjectName_ksn);
    YourObjectName_ksn.YourFunctionName(10,20);
}
