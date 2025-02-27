#include<stdio.h>

/*
As per C_standard function cannot be defined inside the a structure
*/

struct Date
{
    int day; /*data defination statement*/
    int month; /* data defination statement*/
    int year; /*data defination statement*/

    //Function defination->NOT ALLOWED inside
    //struct (listen to deep explanation in sessin 09)
    //CTE(uncomment entire function definaition to see the error
    
    /*
    int get_day()
    {
        return(day);
    }
    */
    
};


// int main()
// {
//     return 0;
// }