#include<stdio.h>

int main(void)
{
    double m1_ksn; /* for storin mass of object 1*/
    double m2_ksn; /*  for storing mass of object 2*/
    double r_ksn;   /* for storing distance between objects*/
    double G_ksn=6.67 * 10e-11;  /* Universal constant of gravitation*/
    double F_ksn;  /* for storing gravitational force of attraction*/

    printf("Enter mass of object 1 in kgs:");
    scanf("%lf",&m1_ksn);

    printf("Enter mass of object 2 in kgs:");
    scanf("%lf",&m2_ksn);

    printf("Enter the distance between the objects in meters:");
    scanf("%lf",&r_ksn);

    if(m1_ksn<=0.0 || m2_ksn<=0.0 || r_ksn<=0.0)
    {
        printf("Invalid values for mass or distance\n");
        return (-1);
    }

    F_ksn=(G_ksn*m1_ksn*m2_ksn)/(r_ksn*r_ksn);

    printf("Gravitation force of attraction = %lf Newtons\n",F_ksn);

    return (0);
}