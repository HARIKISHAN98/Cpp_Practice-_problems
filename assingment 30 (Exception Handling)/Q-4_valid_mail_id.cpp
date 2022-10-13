#include<iostream>
using namespace std;

int Check_valid_mail(char *ptr)
{
int at_Offset = -1;
int dot_Offset = -1;
int index_at ;
int index_dot ;
int size = 0;

for (int i = 0; ptr[i]!=0 ; i++)
{
  if(ptr[i] == '@')
  {
    at_Offset = 0;
    index_at = i;
  }

  else if(ptr[i] == '.')
  {
    dot_Offset = 0;
    index_dot = i;
  }

size++;
}

// cout<<"In fun : index_at = "<<index_at <<" index_dot = "<<index_dot <<" size = "<<size <<endl;

try
{
  if(at_Offset != -1 && dot_Offset != -1 )
   if(index_at < index_dot )
     if(index_dot < size-1)
      throw 1;

  throw 0;    

}

catch(int i)
{
  return i;
}

}

int main()
{

    char mail[50];
    
    cout<<"Enter your mail id : "<<endl;
    gets(mail);
    
    int Is_valid = Check_valid_mail(mail);
    // cout<<"In main : valid --> "<<Is_valid <<endl;
   
    try
    {
    if(Is_valid)
    throw 1;

    else
    throw 0;
    }  

    catch(int i)
    {
      if(i == 1)
      cout<<mail <<": Mail is valid  mail id "<<endl;

      else
      cout<<mail <<": Mail is invalid  mail id "<<endl;
    }
   
    return 0;
}


