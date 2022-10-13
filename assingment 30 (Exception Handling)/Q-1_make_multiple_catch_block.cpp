#include<iostream>
// #include<stdio.h>
using namespace std;

void test_try(int num)
{
  
  try
  {
      if(num>-1 && num<10)
       throw num;

      else
      {
      cout<<"It is not a single number"<<endl;
      char name[20];
      cout<<"Enter your name :"<<endl;
      fflush(stdin);
    //   fgets(name,20,stdin);
    cin >>name;
      throw name;  
      cout<<"It is not a single number"<<endl;

      }
  }

  catch(int a)
  {
    cout<<"It is single number"<<endl;
  }

catch(char b[100])
{
    cout<<b;
}

catch(char *ptr)
{
    cout<<"IN catch block"<<endl;
    for(int i = 0; ptr[i] ;i++)
    cout<<"Your name is : "<<ptr[i];
}

  

}


int main()
{
int num;
cout<<"Enter a number"<<endl;
cin>>num;
test_try(num);
    return 0;
}