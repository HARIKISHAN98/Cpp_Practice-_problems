#include<iostream>
using namespace std;

int main()
{
  char num[20];

  cout<<"Enter your Mobile number : "<<endl;
  gets(num);

  int count_num = 0 , check_char = -1;

  for(int i = 0 ; num[i] != '\0' ; i++)
  {
   if(num[i] >= '0' && num[i] <= '9')
    count_num++;

   else 
     check_char = 1;
  }

  try
  {

    if(check_char == 1)
    throw "hk";

    if(count_num == 10)
    throw 1;

    else
    throw 'e';

  }

  catch(char ch)
  {
    cout<<num <<" : Exception : not Valid mobile number"<<endl;
  }

  catch(int i)
  {
    cout<<num <<" : Valid Mobile number"<<endl;
  }

  catch(char *ptr)
  {
    cout<<num <<" : Exception : not Valid mobile number"<<endl;
  }

  catch(...)
  {
    cout<<num <<" : Exception : not Valid mobile number"<<endl;
  }

    return 0;
}