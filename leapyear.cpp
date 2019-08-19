#include<iostream>
using namespace std;
int main()
{
    int year,a;
    cin>>year;
    a=year%4;
    if(a==0)
        cout<<"yes";
    else
        cout<<"no";
}
