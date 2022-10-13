#include<iostream>
using namespace std;

class Invent1
{
    float a , b;

    public :

    Invent1()
    {
        cout<<"DC called in Invent 1"<<endl;
        a = 0, b = 0;
    }
    
    Invent1(float x)
    {
        cout<<"PC called in Invent 1"<<endl;
        a = x;
        b = x;
    }

    operator float()
    {
        cout<<"float() called in Invent 1"<<endl;
        return a;
    }

    void display()
    {
        cout<<"A : "<<a <<" B : "<<b <<endl;
    }

    float getA() { return a;}

    float getB() { return b;}
};

class Invent2
{
  float x , y;

  public :

  Invent2()
  {
    cout<<"DC called in Invent 2"<<endl;
    x = 0,y = 0;
  }

  Invent2(Invent1 I)
  {
    cout<<"Typecast constructor called in Invent 2"<<endl;
    x = I.getA();
    y = I.getB();
  }

  void display()
  {
    cout<<"X : "<<x <<" Y : "<<y <<endl;
  }

};

int main()
{
  Invent1 s1 = (4,5);
  Invent2 d1;
  float tv;
  tv = s1;
  d1 = s1;
  d1.display();
  return 0;
}