#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<ctime>
#include<cstring>
#include<cctype>
using namespace std;
int a[200];
main()
{
  int i,j,n,c=0,l,d=0;
  cin>>n;
  i=0;
  while(scanf("%d",&a[i])==1) i++;
  for(i=0;i<n;i++,cout<<endl){
    for(j=0;j<n;j++){
      if(a[d]==0&&c==0) {c=1; d++;}
      else if(a[d]==0&&c==1) {c=0; d++;}
      cout<<c;
      a[d]--;
    }
  }
  return 0;
}
