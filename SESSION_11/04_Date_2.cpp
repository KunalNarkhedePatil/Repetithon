#include<iostream>

using std::cout;
using std::endl;

//SERVER SIDE START

class Date
{
    private:
      int day,month,year;

    public:

    void show()
    {
        cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
    }
};

//SERVER SIDE END

//CLIENT SIDE START

int main(void)
{
    //day,month and year of myDate_ksn will contain garbage value

    Date myDate_ksn;

    myDate_ksn.show();

    return (0);
}

//CLIENT SIDE END