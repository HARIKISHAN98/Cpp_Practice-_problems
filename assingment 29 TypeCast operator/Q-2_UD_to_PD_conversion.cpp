#include<iostream>
using namespace std;

class complex
{
    private :
    int real,img;

    public :

    complex()
    {
        cout<<"DC called"<<endl;
        real = 0;
        img = 0;
    }

    complex(int x)
    {
        cout<<"PC called"<<endl;
        real = x;
        img = x;
    }

    void setData(int x,int y)
    {
        real = x;
        img = y;
    }

    void display()
    {
        cout<<"Real : "<<real <<" Img : "<<img <<endl;
    }

    operator int()
    {
       cout<<"Operator int() called "<<endl;
       return real; 
    }
};

int main()
{
  complex c1;
  c1.setData(3,4);
  int x;
  x = c1;
  cout<<"x : "<<x <<endl;
    return 0;
}
