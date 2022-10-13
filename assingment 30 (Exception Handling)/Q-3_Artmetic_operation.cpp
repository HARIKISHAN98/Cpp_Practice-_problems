#include<iostream>
using namespace std;
int main()
{
float num1,num2,ans;
char Operator;

try
{
    cout<<"----------------------------------"<<endl;

    cout<<"Enter 1st number : "<<endl;
    cin>>num1;
    
     cout<<"----------------------------------"<<endl;

    cout<<"Enter Arthmetic operator : "<<endl;
    cin>>Operator;

     cout<<"----------------------------------"<<endl;

    if(Operator != '+' && Operator != '-' && Operator != '*' && Operator != '/')
    {
      throw 'e';
    }

    cout<<"Enter 2nd number : "<<endl;
    cin>>num2;

     cout<<"----------------------------------"<<endl;

    switch (Operator)
    {
    case '+':
        ans = num1 + num2;
        break;
    
    case '-':
        ans = num1 - num2;
        break;

    case '*':
        ans = num1 * num2;
        break;

    case '/':
    if(num2 == 0)
    throw 0;

    else
        ans = num1 / num2;
        break;
    }

 cout<<"Answer : "<<num1 <<Operator <<num2 <<" = " <<ans <<endl;
}

catch(char ch)
{
    cout<<"Exception caught ....... Bad operator"<<endl;
}

catch(int i)
{
    cout<<"Exception caught .......Denomerator is 0 ,bad operation"<<endl;
}

    return 0;
}