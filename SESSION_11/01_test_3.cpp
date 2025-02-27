//REVISION

#include<iostream>

class Test
{
    private:
    int a;
    char b;
    float c;

    public:

    int d;
    int e;
    int f;
};


//Qualified class

//Test_object.a,Test_object.b,Test_object.c
//Test_ptr->a,Test_ptr->b,Test_ptr->c


int main(void)
{
    Test t1_ksn;
    Test t2_ksn;

    //CTE

   // t1_ksn.a=10;
   // t1_ksn.b='a';
    //t1_ksn.c=3.14f;

    //NO COMPILE TIME ERROR

    t1_ksn.d=100;
    t1_ksn.e=200;
    t1_ksn.f=300;
}