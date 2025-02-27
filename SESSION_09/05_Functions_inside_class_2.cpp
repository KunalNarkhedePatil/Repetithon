//THIS FILE WILL NOT COMPILE

#include <iostream>

using std::cout;

int compute(int x,int y);


class Date
{
    public:
    int day;
    int month;
    int year;

    void show(void)
    {
        cout<<day<<"/"<<month<<"/"<<year<<"\n";
    }

    void show(Date * pDate)
    {
        cout<<pDate->day<<"/"<<pDate->month<<"/"<<pDate->year<<"\n";
    }


    //EVERY FUNCTION THAT IS WRITTEN INSIDE THE CLASS DATE
    //EXISTS TO PROCESS OBJECTS OF CLASS DATE

    //EVERY SUCH FUNCTION ACCEPT ADDRESS OF DATE OBJECT
    //TO UNDERSTAND WHICH DATE OBJECT TO PROCESS IN THE CURRENT CALL?
};

//Let C any class
//Let f() be any function that we want to define in class


class C
{
    public:
    void f(C * pC, /* optional other params*/)
    {

    }

    void g()
    {

    }
};


int main(void)
{
    int result_ksn;

    result_ksn=compute(10,5);

    Date myBirthDate_ksn;
    myBirthDate_ksn.day=20;
    myBirthDate_ksn.month=7;
    myBirthDate_ksn.year=1986;

    Date::show(&myBirthDate_ksn);

    Date d1_ksn;

    d1_ksn.day=1;
    d1_ksn.month=2;
    d1_ksn.year=1986;

    Date::show(&d1_ksn);

    Date d2_ksn;

    d2_ksn.day=2;
    d2_ksn.month=10;
    d2_ksn.year=1988;

    Date::show(&d2_ksn);
}

int compute(int x,int y)
{
    return (x+y)* (x-y);
}


///////////////////////////////////////////////


class Date
{

    public:

    int day;
    int month;
    int year;

    void show()
    {
        cout<<this->day<<"/"<<this->month<<"/"<<this->year<<"\n";
    }

};


int main(void)
{
    Date myBirthDate_ksn;

    myBirthDate_ksn.day=20;
    myBirthDate_ksn.month=7;
    myBirthDate_ksn.year=1986;


    //Date::show(&myBirthDate_ksn);

    //Date:show(&myBirthDate_ksn);

    myBirthDate_ksn.show();   //Date::show(&myBirthDate_ksn);
}


//OBJECT ORIENTED ANALYSIS AND DESIGN WITH
//APPLICATION ->GRADY BOOCH

//FIRST PRINCIPLES

//COMPLEXITY

//OTHER ENGINEERING

