#include<cstdio>
#include<iostream>
using namespace std;
int a,b,c,d,s=0;
char e;
int j8(int a,int b)
{
    if(b==0)return a;
    return j8(b,a%b);
}
int main()
{
    scanf("%d%c%d%d%c%d",&a,&e,&b,&c,&e,&d);
    s=b*d;
    s/=j8(a*c,b*d);
    cout<<s<<" ";
    s=a*c;
    s/=j8(a*c,b*d);
    cout<<s;
}
