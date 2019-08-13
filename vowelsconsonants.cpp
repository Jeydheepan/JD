#include<iostream>
using namespace std;
int main()
{
    char vow;
    cin>>vow;
    if(vow='@'||'#'||'$'||'%'||'^'||'&'||'*')
    {
        cout<<"Invalid";
    }
    else
    {
        if(vow='a'||'e'||'i'||'o'||'u')
    {
        cout<<"Vowel";
    }
    else
    {
        cout<<"Consonant";
    }

    }

}
