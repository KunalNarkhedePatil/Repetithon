#include<iostream>

using std::cout;

class Test
{
    int a;
    char b;
    float c;
};


Test g_test_1_ksn;

void test_1(void);

int main(void)
{
    test_1();
    return (0);
}

void test_1(void)
{
    Test t1_ksn;

   // g_test_1_ksn.a=100;  //Compile Time Error (CTE)
   // g_test_1_ksn.b='A';   //CTE
   // g_test_1_ksn.c=3.14f;   //CTE

   // t1_ksn.a=200;    //CTE
   // t1_ksn.b='B';     //CTE
   // t1_ksn.c=6.28f;     //CTE
}