#include<stdio.h>

struct Test
{
    int a;
    char b;
    float c;
};

void test_1(void);
struct Test g_test_1_ksn;

int main(void)
{
    test_1();

    printf("g_test_1_ksn.a=%d,g_test_1_ksn.b=%c,g_test_1_ksn.c=%f\n",g_test_1_ksn.a,g_test_1_ksn.b,g_test_1_ksn.c);

    return (0);
}

void test_1(void)
{
    struct Test t1_ksn;

    g_test_1_ksn.a=100;
    g_test_1_ksn.b='A';
    g_test_1_ksn.c=3.14f;

    t1_ksn.a=200;
    t1_ksn.b='B';
    t1_ksn.c=6.28f;

    printf("t1_ksn.a=%d,t1_ksn.b=%c,t1_ksn.c=%f\n",t1_ksn.a,t1_ksn.b,t1_ksn.c);
}