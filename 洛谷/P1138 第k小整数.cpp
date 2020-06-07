#include<cstdio>
#include<iostream>
using namespace std;
long long i,big,k1,n,k,t,a[30005];
int main()
{
    scanf("%d%d",&n,&k);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&t);
        a[t]=1;
        if (big<t) big=t;
    }
    for (i=1;i<=big;i++)
    {
        if (a[i]==1) k1++;
        if (k1==k)
        {
            printf("%d",i);
            break;
        }
    }
    if (k1<k) cout<<"NO RESULT";
    return 0;
}
