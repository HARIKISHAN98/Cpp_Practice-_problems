#include<iostream>
using namespace std;

class doller
{
   float d;

   public :

   doller()
   {
    cout<<"DC called in doller"<<endl;
    d = 0;
   }

   doller(float x)
   {
    cout<<"PC called in doller"<<endl;
    d = x;
   }

   void display()
   {
   cout<<"Doller is : "<<d <<endl;
   }

   float getD()
   {
    return d;
   }

};

class rupee
{
    float r;

    public :

    rupee()
    {
        cout<<"DC called in rupee"<<endl;
        r = 0;
    }
    
    rupee(float a)
    {
        cout<<"PC called in rupee"<<endl;
        r = a;
    }

    rupee(doller d)
    {
        cout<<"rupee(doller) constructor called in rupee for type conversion"<<endl;
        r = d.getD()*100;
    }

    void display()
    {
        cout<<"Rupee is : "<<r <<endl;
    }

    operator doller()
    {
        cout<<"Doller() called in rupee"<<endl;
        return r/100.0;
    }


};

int main()
{
 rupee r = 23;
 doller d = r;  //rupee to doller conversion 
                // using operator doller() 
 d.display();
 r.display();

 r = d;  //doller to rupee conversion using constructor
 d.display();
 r.display();
    return 0;
}