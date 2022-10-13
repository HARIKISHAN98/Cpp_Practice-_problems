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

    void display()
    {
        cout<<"Real : "<<real <<" Img : "<<img <<endl;
    }

};

int main()
{
  complex c1;
  int x = 5;
  c1 = x;
  c1.display();
    return 0;
}