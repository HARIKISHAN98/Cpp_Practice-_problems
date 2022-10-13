#include<iostream>
using namespace std;
int main()
{

   try
   {
    throw 'e';

    throw 1;
    
   }

   catch(int num)
   {
    cout<<"NUM : "<<num <<endl;
   }

   catch(char ch)
   {
    cout<<"Character is : "<<ch <<endl;
   }

    return 0;
}