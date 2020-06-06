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
  int n,p;
  int i=1;
  cin>>n>>p;
  int f=n;
  int m[32];
  while(n!=0){
  	m[i]=n%p;
  	if (m[i]<0){
  		m[i]=m[i]-p;
  		n=n/p+1;
	  }
	else{
		n=n/p;
	}
  	++i;
  }
  cout<<f<<'=';
  for(int a=i-1;a>=1;--a){
  	if(m[a]>=10){
  			cout<<(char)(m[a]+55);
	  }
  	else{
  		cout<<m[a];
	  }
  }
  cout<<"(base"<<p<<")";
  return 0;
}

