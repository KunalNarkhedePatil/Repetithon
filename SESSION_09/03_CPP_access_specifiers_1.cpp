#include <iostream>

using std::cout;


class Test
{
    private:
        int a;
    public:
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


    //g_test_1_ksn.a=100;    //CTE
    g_test_1_ksn.b='A';
    g_test_1_ksn.c=3.14f;

    //t1_ksn.a=200;     //CTE

    t1_ksn.b='B';
    t1_ksn.c=6.28f;
}