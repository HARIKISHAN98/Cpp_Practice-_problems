#include<iostream>
#include<cstring>
using namespace std;

int Is_valid(char *mail)
{
    int index_at = -1 , size_mail = 0;

    for (int i = 0; mail[i]; i++)
    {
        if(mail[i] == '@')
        index_at = i;

     size_mail++;   
    }
    
    if(index_at == -1)
    return -1;

// cout<<"index_at = "<<index_at <<" , size = "<<size_mail <<endl;

   int new_size = size_mail - index_at + 1;
   char temp[new_size];

   for (int i = 0; i < new_size ; index_at++ ,i++)
   {
    temp[i] = mail[index_at];
   }

//    cout<<"temp = "<<temp <<endl;

  int check = strcmp(temp,"@gmail.com");
  return check ;

}

int main()
{
char mail[50];
cout<<"Enter your mail id"<<endl;
gets(mail);
int check = Is_valid(mail);
try
{
    if(check == 0)
    throw 0;

    else
    throw 'e';
}

catch(int i)
{
    cout<<mail <<" : Valid Mail Id"<<endl;
}

catch(...)
{
    cout<<mail <<" : Invalid Mail Id"<<endl;
}

    return 0;
}