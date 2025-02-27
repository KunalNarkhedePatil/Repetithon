//header file inclusion

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Defination of structure MassAndDistance
//capturing mass and distance data of 
//objects

struct MassAndDistance
{
    double m1;
    double m2;
    double r;
};

//Function declarations

double ComputeGravitational(struct MassAndDistance *pData);

int main(void)
{
    //variables

    struct MassAndDistance earthSun_ksn;
    struct MassAndDistance jupitorSun_ksn;
    double forceBetweenEarthAndSun_ksn;
    double forceBetweenJupitorAndSun_ksn;

    //code

    earthSun_ksn.m1= 1.9891e30;
    earthSun_ksn.m2= 5.9722e24; 
    earthSun_ksn.r=149597871000;

    forceBetweenEarthAndSun_ksn=ComputeGravitational(&earthSun_ksn);
    (&earthSun_ksn);

    printf("Gravitational force between the sun and the earth - =%lf Newton",forceBetweenEarthAndSun_ksn);

    jupitorSun_ksn.m1=1.9891e30; 
    jupitorSun_ksn.m2 = 1.89813e27; 
    jupitorSun_ksn.r -760070000000; 

    forceBetweenJupitorAndSun_ksn=ComputeGravitational(&jupitorSun_ksn);

    printf("Gravitational force between the sun the the jupitor = %lf Newtons\n",forceBetweenJupitorAndSun_ksn);

    return (0);

}
double ComputeGravitational(struct MassAndDistance * pData)
{
      //variable definations 

      double G=6.67 * 10e-11; //Universal constant of gravitation
      double F; //For storing the amount of force in Newton

      if(pData->m1<=0.0  || pData->m2<=0.0 || pData->r<=0.0)
      {
          return (NAN);
      }

      F=(G*pData->m1 * pData->m2)/(pData->r * pData->r);

      return (F);
}