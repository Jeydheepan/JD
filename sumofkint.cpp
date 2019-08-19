#include<iostream>
using namespace std;
int main()
{
    int a[100],n,k,b=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<k;i++)
    {
        b=b+a[i];
    }
    cout<<b;
}
