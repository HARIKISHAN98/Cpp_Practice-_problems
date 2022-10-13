#include<iostream>
using namespace std;
int main()
{
  char name[20];
  cout<<"Enter your Username : "<<endl;
  gets(name);

  int check_digit = -1 , check_symbol = -1 , cout_char = 0;

  for (int i = 0; name[i] ; i++)
  {
    if( name[i] >= '0' && name[i] <='9' )
    check_digit = 1;

    else
    check_symbol = 1;

    cout_char++;
  }
  
  try
  {
    if(check_digit == 1 && check_symbol == 1  && cout_char < 6)
    throw 1;

    else
    throw 'e';
  }

catch(int i)
{
    cout<<name <<" : Valid Username"<<endl;
}

catch(char ch)
{
    cout<<name <<" : Invalid Username"<<endl;
}

    return 0;
}