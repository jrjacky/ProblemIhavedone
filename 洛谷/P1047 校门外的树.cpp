#include<cstdio>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>
bool t[10000+5]={1};
int a,b,c,d,e;
int main()
{
    scanf("%d %d",&a,&b);
    for(int i=0;i<=a;i++)     t[i]=1;
    for(int i=1;i<=b;i++)
    {
        scanf("%d %d",&c,&d);
        for(int i=c;i<=d;i++)    t[i]=0;
    }
    for(int i=0;i<=a;i++)
    {
        if(t[i]==1)            e++;
    }
    printf("%d",e);
    system("pause");
    return 0;
}
