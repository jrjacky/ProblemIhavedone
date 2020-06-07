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
  int n;
  double s;
  cin>>n;
  if(n<=150){
  	s=n*0.4463;
  }
  else{
  	if(n<=400){
  		s=150*0.4463+(n-150)*0.4663;
	  }
	else{
		s=150*0.4463+250*0.4663+(n-400)*0.5663;
	}
  }
  printf("%.1f",s);
  return 0;
}
