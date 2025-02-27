//header file inclusion

#include<iostream>

//important symbols cout and endl from standard namespace

using std::cout;
using std::endl;

//SERVER SIDE START

class Date{
    private:

    //date layout defination

    int day;
    int month;
    int year;

    public:

    //public member function
    //REMEMBER -> First parameter of init() function is Date *this

    void init(int init_day,int init_month,int init_year)
    {
        this->day=init_day;
        this->month=init_month;
        this->year=init_year;
    }

    //REMEMBER -> first parameter of show is Date *this

    void show()
    {
        cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
    }


};

//SERVER SIDE END

//CLIENT SIDE START

int main(void)
{
    //create an object of class Date

    Date myDate_ksn;

    //use object of class Date

    cout<<"myDate_ksn object before calling init() function on it"<<endl;

    myDate_ksn.show();  //Date::show(&myDate_ksn);

    myDate_ksn.init(8,2,2025);  //Date::init(&myDate_ksn,8,2,2025)

    cout<<"myDate_ksn object after calling init() function on it"<<endl;

    myDate_ksn.show();

    return (0);
}

//CLIENT SIDE END