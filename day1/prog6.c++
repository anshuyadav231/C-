/*Program to Swap Two Numbers*/

#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"-----before swapping-----"<<endl;
    cout<<"Enter value of A : ";
    cin>>a;
    cout<<"Enter value of B : ";
    cin>>b;
    cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
    int temp;
    temp = a;
    a=b;
    b= temp;
    cout<<"-----after swapping-----"<<endl;
    cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
    return 0;

}