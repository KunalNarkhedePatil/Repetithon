#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

void string_demo();
void vector_demo();

int main(void)
{
    string_demo();
    vector_demo();

    return (0);
}

void string_demo(void)
{
    string s1_ksn;
    string s2_ksn("Hello");
    string s3_ksn(s2_ksn);

    cout<<"-------STRING DEMO ENTER---------------"<<endl;

    cout<<"s1_ksn:"<<s1_ksn<<endl;
    cout<<"s2_ksn:"<<s2_ksn<<endl;
    cout<<"s3_ksn:"<<s3_ksn<<endl;

    cout<<"addr(s2_ksn):"<<&k2_ksn<<endl;
    cout<<"addr(s3_ksn):"<<&k3_ksn<<endl;

    cout<<"content of s2 and s3 are same but addresses are not this proves that s3_ksn is clone of s2_ksn"<<endl;

    cout<<"show a string char by char:"<<endl;

    cout<<"METHOD 1: Using index:"<<endl;

    for(string::size_type i=0;i!=s2_ksn();i++)
    {
        cout<<"s2_ksn["<<i<<"]:"<<s2_ksn[i]<<endl;
    }
    cout<<"-------METHOD 1 END----------"<<endl;

    cout<<"METHOD 2: Using Iterator:"<<endl;

    for(string::iterator iter=s2_ksn.begin();iter!=s2_ksn.end();++iter)
    {
        cout<<"*iter="<<*iter<<endl;
    }

    cout<<"--------METHOD 2 END---------"<<endl;
    cout<<"---------STRING DEMO LEAVE-----------"<<endl;



}

//string :DYNAMICALLY RESIZABLE CHARACTER ARRAY

//TIME : src-> exe (static)

//exe start -> exe end (dynamic/run)

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

CLIENT

#include<string>

using std::string

int main(void)
{
   for(string::size_type i)
}

//without

//using std::string

int main(void)
{
  for(std::string::size_type i)
}

namespace std
{
     class string
     {
          public:
        typedef unsigned short size_type;
     };
}

string:: size_type i;

s2_ksn.size();  std:: string::size(&s2_ksn)

namespace std
{
    class string
    {
         public:
         
         typedef unsigned long long size_type;

         size_type size()
         {
             //return the length long long int size_type;
             //by this pointer
         }
    };
}

//PRINCIPLE : DONT CHANGE THE LENGTH OF ITERABLE WHILE ITERATING ON IT
//ITERABLE -> AN OBJECT ON WHICH ITERATION IS BEING PERFORMED
*/