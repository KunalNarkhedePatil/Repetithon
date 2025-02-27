//This code will not compile because we have not implemented
//get_roll_number(),get_sal() and get_addr()
//BUT DO INCLUDE CODE IN REPATITHON
#include<iostream>

using std::cout;
using std::endl;

//int get_roll_number(void);
//double get_sal(void);
//const char * get_addr(void);

//GOOD PRACTICE

typedef int rollnumber_t_ksn;
typedef double salary_t_ksn;
typedef const char * addr_t_ksn;

void test_function(void);

int main(void)
{
    int x;   // x is a roll number
    int y;   // y is a salary
    char *s;  // s is an address

    test_function();

    return 0;
}

void test_function(void)
{
    rollnumber_t_ksn get_roll_number(void);
    salary_t_ksn get_sal(void);
    addr_t_ksn get_addr (void);

    rollnumber_t_ksn roll_number;
    salary_t_ksn salary_of_employee;
    addr_t_ksn address_of_student;

    roll_number=get_roll_number();
    cout<<"roll_number is :"<<roll_number<<endl;
    salary_of_employee=get_sal();
    cout<<"salary_of_employee is :"<<salary_of_employee<<endl;

    address_of_student=get_addr();

    cout<<"address_of_student is :"<<address_of_student<<endl;
}
int get_roll_number(void)
{
    cout<<"Inside get_roll_number()"<<endl;
    return 201;
}
double get_sal(void)
{
    cout<<"Inside get_sal()"<<endl;

    return 23344.3434;
}

addr_t_ksn get_addr(void)
{
    cout<<"get addr()"<<endl;

    return "Kunal";
}