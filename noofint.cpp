#include<iostream>
using namespace std;
int main()
{
    int a,ct=1;
    cin>>a;
    while(a>=10)
    {
        a=a/10;
        ct++;
    };
    cout<<ct;
}
