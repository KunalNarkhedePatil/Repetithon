#include<stdio.h>

/*
As per C-standard function cannot be defined inside a structure

*/

struct Date
{
    int day;  /*  data defination statement*/
    int month;  /* data defination statement*/
    int year;  /* data defination statement*/


    //Function defination -> NOT ALLOWED inside 
    //struct (listen to deep explanation in session 9)
    //CTE (uncomment entire function defination to see the error)

    /*

    int get_day()
    {
        return (day);
    }
    */
};

int main(void)
{
    return (0);
}