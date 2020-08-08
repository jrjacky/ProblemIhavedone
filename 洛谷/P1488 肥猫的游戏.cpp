#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<ctime>
#include<cstring>
#include<cctype>
int main()
{  int Ha[53001]={0},n,aa,bb,cc;
 scanf("%d",&n);
 for(int i=1;i<=n-2;i++)
 {   int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(i==1)aa=a,bb=b,cc=c;
  Ha[a]++;Ha[b]++;Ha[c]++;
 }  if(Ha[aa]==1 || Ha[bb]==1 || Ha[cc]==1)  {   printf("JMcat Win\n");
    }  else if((n-2)%2==1)
  printf("PZ Win\n");
 else   printf("JMcat Win\n");
 return 0;
}
