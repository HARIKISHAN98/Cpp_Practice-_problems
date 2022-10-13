#include<iostream>
using namespace std;
int main()
{
  char Password[20];
  cout<<"Enter your Password : "<<endl;
  gets(Password);
  
  //flag variables
  int check_digit = -1 , check_symbol = -1 , cout_char = 0 ,check_Capital = -1;

 for (int i = 0; Password[i]; i++)
 {
    if(Password[i] >= 'A' && Password[i] <= 'Z')
    check_Capital = 1;

    else if (Password[i] >= '0' && Password[i] <= '9')
    check_digit = 1;

    else 
    check_symbol = 1;


cout_char++;
 }

 try
 {
    if(check_digit == -1 || check_symbol == -1 || check_Capital == -1)
    throw 0;

    else if(cout_char < 6)
    throw 'e' ;

    else
    throw 1;
 }

catch(int i)
{
    if(i == 0)
        cout<<"Password is not accepted"<<endl;

    else
        cout<<"Password Accepted"<<endl;
       
}

catch(char ch)
{
cout<<"Password is not accepted"<<endl;
}

  return 0;
}