//This version of does not break the abstraction barrier

#include<stdio.h>

//SERVER SIDE START

struct Date
{
    int day;
    int month;
    int year;
};

void show(struct Date *pDate)
{
    printf("%d/%d/%d\n",pDate->day,pDate->month,pDate->year);
}

//SERVER SIDE END

//CLIENT SIDE START

int main(void)
{
    struct Date myDate_ksn={8,2,2025};

    show(&myDate_ksn);

    return (0);
}