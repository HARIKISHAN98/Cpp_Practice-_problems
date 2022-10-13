#include<iostream> 
using namespace std;

class rupee
{
    int x;

    public :

    rupee()
    {
        cout<<"DC called in rupee"<<endl;
        x = 0;
    }
    
    rupee(int a)
    {
        cout<<"PC called in rupee"<<endl;
        x = a;
    }

    operator int()
    {
        cout<<"int() called in rupee"<<endl;
        return x;
    }

    void display()
    {
        cout<<"Rupee is : "<<x <<endl;
    }

};

int main()
{
    
    rupee r = 10;
    int x = r;
    cout<<x <<endl;

    return 0;
}