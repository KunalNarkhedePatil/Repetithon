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
        cout<<"*****DATE CONSTRUCTOR ENTER******"<<endl;

        cout<<"Address of newly allocated object:"<<this<<endl;

        this->day=_day;
        this->month=_month;
        this->year=_year;

        cout<<"******DATE CONSTRUCTOR LEAVE******"<<endl;
    }

    void show()
    {
        cout<<"******Date::shwow() ENTER ******"<<endl;

        cout<<"Address of object whose member must be shown:"<<this<<endl;
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

int main(void)
{
    //Memory allocattion of 12 bytes of stack fram of main() + call to constructor 

    Date myBirthDate_ksn(20,7,1986);

    //Memory allocation of 12 bytes of stack frame of main() + call to constrctor

    Date cpaBirthDate_ksn(1,12,2009);

    cout<<"main():address of myBirthDate_ksn:"<<&myBirthDate_ksn<<endl;
    cout<<"main():address of cpaBirthDate_ksn"<<&cpaBirthDate_ksn<<endl;


    cpaBirthDate_ksn.show();
    myBirthDate_ksn.show();

    return (0);
}