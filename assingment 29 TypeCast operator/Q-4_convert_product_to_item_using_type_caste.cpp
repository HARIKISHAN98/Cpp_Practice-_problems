#include<iostream>
using namespace std;

class item
{
    int i;

    public :

    item()
    {
        cout<<"DC called in item"<<endl;
    }

    void display()
    {
        cout<<"I is "<<i <<endl;
    }

    item(int x)
    {
        cout<<"PC called in item"<<endl;
        i = x;
    }

};

class product
{
    int a , b;

    public :

    void display()
    {
        cout<<"a : "<<a <<" b : "<<b <<endl;
    }
    
    void setData(int x,int y)
    {
        a = x;
        b = y;
    }
    
    operator item()  //type caste operator
    {
        cout<<"item() called in product"<<endl;
        return a;
    }

};



int main()
{
product p1;
item i1;
p1.setData(3,4);
i1 = p1; //using type caste
i1.display();
    return 0;
}