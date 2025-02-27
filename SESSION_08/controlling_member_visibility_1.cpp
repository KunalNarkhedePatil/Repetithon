#include <iostream>

//COMPANY:PRODUCT
struct MassAndDistance_1
{
    double m1;
    double m2;
    double r;
};

//COMPANY :PRODUCT

class MassAndDistance_2
{
    double m1;
    double m2;
    double r;
};

int main(void)
{
    using std::cout;
    using std::end;

    //GRAHAK : CLIENT

    struct MAssAdnDistance_1 X1_ksn;
    MassAndDistance_2 X2_ksn;

    //CLIENT IS ACCESSING THE INTERNAL MEMBERS OF THE PRODUCT
    // HE/ SHE HAS BROUGHT
    X1_ksn.m1=1.1;
    X1_ksn.m2=2.2;
    X1_ksn.r=3.3;

    X2_ksn.m1=1.1;
    X2_ksn.m2=2.2;
    X2_ksn.r=3.3;

    return 0;
}

//MAINSTREAM CASES
//POWERFUL PROGRAMMING
//LANUAGE DEEP EXPERT