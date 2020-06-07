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
  int n,a,aa,bz=1;
  int s=0;
  cin>>n;
  for(a=1;a<=n;a=a*10){
  	s=s+1;
  }
  if(n<0) cout<<"-";
  for(int aa=abs(n);aa>0;aa=aa/10){
  	if(aa%10==0&&bz==1);
	  else {
  		cout<<aa%10;
  		bz=0;
	  }
  	
  }
  return 0;
}
