#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<ctime>
#include<cstring>
#include<cctype>
using namespace std;
char c,s[40001];
int n,m,i,j,k;
int main()
{
    n=1;
    while(cin>>c)
    {
        if(isdigit(c))
        {
            s[n]=c;
            ++n;
        }
    }
    --n;
    m=int(sqrt(double(n)));
    cout<<m<<' ';
    j=s[1];
    if(j=='1')
    cout<<0<<' ';

    k=0;
    for(i=1;i<=n;++i)
    {
        if(s[i]==j)
        ++k;
        else
        {
            cout<<k<<' ';
            j=s[i];
            k=1;
        }
    }
    cout<<k; 
    return 0;
}
