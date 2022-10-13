#include<iostream>
using namespace std;

class Product
{
  private :  
  int a,b;

  public :
  
  int getP(){ return a;}

  void setData(int x ,int y)
  {
    a = x;
    b = y;
  }

  void display()
  {
    cout<<"a : "<<a <<" b : "<<b <<endl;
  }

  // operator item()
  // {
  //   cout<<"item() called in prodeuct"<<endl;
  //   return a;
  // }

};

class item
{
  int i;

  public :

  item(Product p)
  {
    cout<<"item(product) called in item"<<endl;
    i = p.getP();
  }

   item()
   {
    cout<<"DC called in item"<<endl;
   }

   item(int x)
{
  cout<<"PC called in item"<<endl;
  i = x;
}
 
  void setData(int x)
  {
    x = i;
  }

  void showData()
  {
    cout<<"I : "<<i <<endl;
  }

};

int main()
{
  item i1;
  Product p1;
  p1.setData(3,4);
  i1 = p1;  //using contructor
  i1.showData();
    return 0;
}


