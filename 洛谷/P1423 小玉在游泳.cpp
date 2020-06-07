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
  double a,b=2,c=2;
  int i=1;
  cin>>a;
  while(b<a){
  	c=c*0.98;
  	b=b+c;
  	i=1+i;
  }
  cout<<i<<endl;
  return 0;
}
