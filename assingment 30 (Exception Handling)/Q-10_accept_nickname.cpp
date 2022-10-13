#include<iostream>
using namespace std;

int main()
{
    char nickname[20];
  cout<<"Enter your nickname : "<<endl;
  gets(nickname);

  int check_digit = -1 , check_symbol = -1 , cout_char = 0 ,check_space = -1;

  for (int i = 0; nickname[i] ; i++)
  {
    if(nickname[i] >= '0' && nickname[i] <='9')
    check_digit = 1;

    else if(nickname[i] == ' ')
    check_space = 1;

    else if( (nickname[i] >= 'a' && nickname[i] <='z') || (nickname[i] >= 'A' && nickname[i] <='Z' ))
    continue ;

    else
    check_symbol = 1;

    cout_char++;
  }

  try
  {
    if(check_digit == 1 || check_space == 1 || check_symbol == 1)
    throw 0;

    else if(cout_char < 9)
    throw 1;

    else
    throw 'e';
  }

  catch(const int i)
  {
    if(i == 0)
    cout<<nickname <<" : Nickname is not accepted"<<endl;

    else
    cout<<nickname <<" : Nickname is Accepted"<<endl;
  }
  
  catch(const char ch)
  {
    cout<<nickname <<" : Nickname is not accepted"<<endl;
  }



    return 0;
}

