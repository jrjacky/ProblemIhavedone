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
  cin>>n;
  cout<<n<<endl;
  for(int i=1;i<=n;i++)
  {
      int k=1-i%2;
      for(int j=1;j<=i;j++){
      	cout<<k;
	  }
      for(int j=1;j<=n-i;j++){
      	cout<<(1-k);
	  }
	cout<<endl;
  }
  return 0;
}
