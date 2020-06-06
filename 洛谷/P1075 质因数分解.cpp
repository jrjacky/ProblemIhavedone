#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<ctime>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    for(i=2;i<=a;++i)
    {
        if(a%i==0)
        {    cout<<a/i;
        return 0;}
    }    
    return 0;
}
