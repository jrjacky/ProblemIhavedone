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
  int a,b,c,d,e,f,g,h,i;
  cin>>a>>b>>c>>d;
  e=a*60+b;
  f=c*60+d;
  g=f-e;
  h=g/60;
  i=g%60;
  cout<<h<<" "<<i;
  return 0;
}
