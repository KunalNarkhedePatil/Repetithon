//This code will not compile because we have not implemented 
//get_roll_number(),get_sal() and getaddr()
//BUT DO INCLUDE THIS CODE IN REPEATITHON

#include<iostream>
using std::cout;
using std::endl;

int get_roll_number();
double get_sal();
const char * get_addr();

//GOOD PRACTICE

typedef int rollnumber_t_ksn;
typedef double salary_t_ksn;
typedef const char * addr_t_ksn;

void test_function(void);

int main(void)
{
    int x;   //x is a roll number
    int y;   //y is a salary
    char *s;  // s is an addresss

    test_function();
    return (0);
}

void test_function()
{
    //rollnumber_t_ksn get_roll_number(void);
    //salary_t_ksn get_salary(void);
    //addr_t_ksn get_address(void);
   
   rollnumber_t_ksn roll_number;
   salary_t_ksn salary_of_employee;
   addr_t_ksn address_of_student;

   roll_number=get_roll_number();
    cout<<"roll_number :"<<roll_number<<endl;
    salary_of_employee=get_sal();
    cout<<"salary_of_employee :"<<salary_of_employee<<endl;
    address_of_student=get_addr();
    cout<<"address_of_student :"<<address_of_student<<endl;
}

int get_roll_number()
{
    cout<<"Inside get_roll_number()"<<endl;
    return 101;
}
double get_sal()
{
    cout<<"Inside get_salary_number()"<<endl;

    return 50000.500;
}
const char * get_addr()
{
    cout << "Inside get_address()"<<endl;
    return "Kunal";
} 