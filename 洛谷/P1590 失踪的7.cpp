#include <cstdio>
#include <iostream>
using namespace std;
int f[999999]; 
int pd(int x)
{
    while(x)
    {
        int a=x%10;
        if(a==7) return 1;
        x/=10;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
     {
         int x;
         scanf("%d",&x);
         int ans=x;
         for(int j=1;j<=x;j++)
         {
             if(f[j]==0)
             {
                 if(pd(j)==1) f[j]=-1,ans--;
                 else         f[j]=1;
             }
             else
             {
                 if(f[j]==-1) ans--; 
             }
         }
         printf("%d\n",ans);
     }
     return 0;
}
