//REVISION CODE

#include<iostream>

using std::cout;

using std::endl;

class Date{
    public:
    int day;
    int month;
    int year;

    void show(Date *pDate)
    {
        cout<<pDate->day<<"/"<<pDate->month<<"/"pDate->year<<endl;
    }
};

int main(void)
{
    Date myDate_ksn;    //day,month,year
    Date d1_ksn;

    myDate_ksn.day=8;
    myDate.month=2;
    myDate.year=2025;

    d1_ksn.day=11;
    d1_ksn.month=3;
    d1_ksn.year=2026;

    Date::show(&myDAte_ksn);
    Date::show(&d1_ksn);
}

class C
{
    public:

    //f() exist to algorithmically process an object of class C

    void f()
    {
        //which object of class C will be processed in the current
        //call of C::f()
    }
};

class YourClassName{
    private:
    int a;
    char b;
    float c;

    public:

    //YourClassName * this->FIRST FORMAL PARAMTER

    void YourFunctionName(int m,int n)
    {
        this->data_member
        this->function_member

        this->a
        this->b;
        this->c
    }
};

int main(void)
{
    YourClassName YourObjectName_ksn;

    YourClassName::YourFunctionName(&YourObjectName_ksn);

    YourObjectName_ksn.YourFunctionName(10,20);
}