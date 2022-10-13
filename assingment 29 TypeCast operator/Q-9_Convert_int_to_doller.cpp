#include<iostream>
using namespace std;

class doller
{
   int d;

   public :

   doller()
   {
    cout<<"DC called"<<endl;
    d = 0;
   }

   doller(int x)
   {
    cout<<"PC called"<<endl;
    d = x;
   }

   void display()
   {
   cout<<"Doller is : "<<d <<endl;
   }

};

int main()
{
    int x = 50;
    doller d;
    d = x;
    d.display();

  return 0;
}