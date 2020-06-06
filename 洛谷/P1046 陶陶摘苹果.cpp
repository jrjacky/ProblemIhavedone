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
  int a[10],b,s=0;
  for(int i=0;i<=9;i++){
  	cin>>a[i];
  }
  cin>>b;
  b=b+30;
  for(int i1=0;i1<=9;i1++){
  	if(a[i1]<=b){
  		s=s+1;
	  }
  }
  cout<<s<<endl;
  return 0;
}
