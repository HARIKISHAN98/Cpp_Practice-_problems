#include<iostream>
using namespace std;
int main()
{
int check_char = -1;
char code[20];
cout<<"Enter Area pincode : "<<endl;
gets(code);
int count = 0;

for (int i = 0; code[i]!='\0'; i++)
{
    if(code[i] >= '0' && code[i] <='9')
    count++;

    else
    check_char = 1;
}

try
{
    if(check_char == 1)
    throw 'a';

    else if(count == 6)
    throw 1;

    else
    throw 'f';
}

catch(char ch)
{
    cout<<code <<" : Not a valid Area Pincode"<<endl;
}

catch(...)
{
    cout<<code <<" : Valid Area Pincode"<<endl;

}

    return 0;
}