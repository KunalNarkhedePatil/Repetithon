#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

void string_demo(void);
void vector_demo(void);

int main(void)
{
    string_demo();
    vector_demo();
}

void string_demo(void)
{
    string s1_ksn;
    string s2_ksn("Hello");
    string s3_ksn(s2_ksn);

    cout<<"---------STRING DEMO ENTER-----------"<<endl;
    cout<<"s1_ksn:"<<s1_ksn<<endl;
    cout<<"s2_ksn:"<<s2_ksn<<endl;
    cout<<"s3_ksn:"<<s3_ksn<<endl;

    cout<<"addr(s2_ksn):"<<s2_ksn<<endl;
    cout<<"addr(s3_ksn):"<<s3_ksn<<endl;

    cout<<"contents of s2_ksn and s3_ksn are same but addresses are not"<<endl;

    cout<<"this proves that s3_ksn is a clone of s2_ksn"<<endl;

    cout<<"Show a string char by char:"<<endl;
    cout<<"METHOD 1:Using index:"<<endl;

    for(string :: size_type i=0 ;i!=s2.size();++i)
    {
        cout<<"s2["<<i<<"]":<<s2[i]<<endl;
    }

    cout<<"-----METHOD 1 END-------"<<endl;
    cout<<"METHOD 2 : Using Iterator:"<<endl;

    for(string ::iterator iter =s2.begin();iter!=s2.end();++iter)
    {
        cout<<"*iter="<<*iter<<endl;
    }

    cout<<"-----------METHOD 2 END-------------"<<endl;
    cout<<"-----------STRING DEMO LEAVE--------"<<endl;
}

//string :DYNAMICALLY RESIZABLE CHARACTER ARRAY
//TIME:src->exe(static)
//exe start -> exe and (dynamic/run)

void vector_demo(void)
{

}

//LIBRARY IMPLEMENTATION

/*

Inside Header file STRING

string

namespace std
{
   class string
   {
     public:
         typedef unsigned long long int size_type;
   };
}

-----------------------------------------------------

CLIENT

#include <string>

using std::string

int main(void)
{
    for(string::size_type i;)
}

//without

//using std::string

int main(void)
{
   class string
   {
      public:
          typedef unsigned short size_type;
   };
}

string::size_type i;
//s2.size();   std::string::size(&s2)

namespace sdt
{
     class string
     {
        typedef unsigned long long int size_type;
        size_type size()
        {
             //return the length of the string pointed
             //by this pointer
        }
     };
}

// PRINCIPLE DONT CHANGE THE LENGTH OD ITERABLE WHILE ITERATINFG ON IT
//IERABLE -> AN OBJECT ON WHICH ITERATION IS BEING PREFORMED
*/