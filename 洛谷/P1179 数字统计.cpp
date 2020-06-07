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
    int a,b,c,d,t,s=0;
    cin>>b>>c;
    for(a=b;a<=c;a++)
    {
        t=a;
        while(t!=0)
       {
        d=t%10;
        if(d==2)s++;
        t/=10; 
       }
    }
    cout<<s;
    return 0;
}
