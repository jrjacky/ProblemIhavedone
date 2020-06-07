#include<cstdio>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d\n",((long long)n*k-1)/(k-1));
    return 0;
}
