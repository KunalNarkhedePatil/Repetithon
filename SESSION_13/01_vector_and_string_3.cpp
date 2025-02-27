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

    return (0);
}

void string_demo()
{
    string s1;
    string s2("Hello");
    string s3(s2);

    cout<<"------STRING DEMO ENTER--------"<<endl;

    cout<<"s1:"<<s1<endl;
    cout<<"s2:"<<s2<<endl;
    cout<<"s3:"<<s3<<endl;

    cout<<"addr(s2):"<<&s2<<endl;
    cout<<"addr(s3):"<<&s3<<endl;

    cout<<"contents of s2 and s3 are same but address are not "<<endl;
    cout<<"this proves that s3 is a clone of s2"<<endl;

    cout<<"Show a string char by char :"<<endl;

    cout<<"METHOD 1: Using index"<<endl;

    for(string::size_type i=0;i!=s2.size();++i)
    {
        cout<<"s2["<<i<<"]:"<<s2[i]<<endl;
    }

    cout<<"-------METHOD 1 END---------"<<endl;
    cout<<"-------STRING DEMO LEAVE-----"<<endl;
}

//string : DYNAMICALLY RESISABLE CHARACTER ARRAY
//TIME : src->exe(static)
//exe start -> exe end (dynamic/run);

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

#include <string>

int main(void)
{
     for(std::string :: size_type i)
}
*/

#include<std.h>

int main(void)
{
    return 0;
}