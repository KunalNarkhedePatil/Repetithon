//This is a revision code

#include<stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

int main(void)
{
    int num=10;

    printf("num=%d\n",num);  //10 will be printed

    struct Date myDate_ksn={9,2,2025};

    printf("%d/%d/%d\n",myDate_ksn.day,myDate_ksn.month,myDate_ksn.year);

    // 9,2,2025

    return (0);
}
