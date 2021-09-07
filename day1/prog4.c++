/*Program to Find Quotient and Remainder*/


#include<iostream>
using namespace std;
int main()
{
    int a,b,quo, rem;
    cout<<"Enter the number : "<<endl;
    cin>>a>>b;
    quo = a/b;
    rem = a%b;
    cout<<"The quotient of "<<a<<" / "<<b<<" = "<<quo<<endl;
    cout<<"The reminder of "<<a<<" % "<<b<<" = "<<rem<<endl;
    return 0;
}