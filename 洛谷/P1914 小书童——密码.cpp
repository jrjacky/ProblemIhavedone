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
  int n,i,j,k;
  char ch[100];
  scanf("%d %s",&n,ch);
  int l=strlen(ch);
  for(i=0;i<l;i++)
  {
      ch[i]=((ch[i]-'a')+n)%26+('a');
  }
  puts(ch);
  return 0;
}
