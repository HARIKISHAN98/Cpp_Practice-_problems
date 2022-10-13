#include<iostream>
using namespace std;

class Time
{
    int Hour , minute ;

    public :
    
    int get_min()
    {
        return minute;
    }

    Time (int h ,int m):Hour(h),minute(m)
    {
        cout<<"PC called in Time"<<endl;
    }

    void display()
    {
        cout<<"Hour : "<<Hour <<" Minute : "<<minute <<endl;
    }

    // operator Minute()
    // {
    //     cout<<"Minute() called in Time"<<endl;
    //     return minute;
    // }

};

class Minute
{
    int min ;

    public :

    Minute()
    {
        cout<<"DC called in Minute"<<endl;
        min = 0;
    }

    Minute(int temp)
    {
        cout<<"PC called in Minute"<<endl;
        min = temp;
    }

    Minute(Time t)
    {
        cout<<"Minute(time) in Minute"<<endl;
       min = t.get_min(); 
    }

    void display()
    {
        cout<<"Minute is : "<<min <<endl;
    }

};

int main()
{
  Time t1(20,30);
  t1.display();
  Minute m1;
  m1 = t1;
  t1.display();
  m1.display();


    return 0;
}