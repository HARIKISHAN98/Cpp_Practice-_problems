#include<iostream>
using namespace std;

class Time
{
  float Second;

  public :

  Time()
  {
    cout<<"DC called in Time"<<endl;
    Second = 0;
  }

  Time(int Temp)
  {
    cout<<"PC called in Time"<<endl;
    Second = Temp * 60;
  }

  void display()
  {
    cout<<"Time duration in second : "<<Second <<endl;
  }

};

int main()
{
    int duration;
    cout<<"Enter time duration in minute"<<endl;
    cin>>duration;
    Time t1 = duration;
    t1.display();
    return 0;
}