/*Program to Check Whether Number is Even or Odd*/

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your number : ";
    cin>>a;
    if ( a % 2 ==0)
    {
        cout<<"The given number "<<a<<" is even. "<<endl;
    }
    else 
    {
        cout<<"The given number "<<a<< " is odd. "<<endl;
    }
    return 0;
}