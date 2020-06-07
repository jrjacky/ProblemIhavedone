#include<iostream>
using namespace std;
int main()
{
    int a[2000];
    a[0]=6;a[1]=2;a[2]=5;a[3]=5;a[4]=4;a[5]=5;a[6]=6;a[7]=3;a[8]=7;a[9]=6;
    for(int i=10;i<=1999;i++)
    {
        a[i]=a[i/10]+a[i%10];
    }
    int n,sum=0;
    cin>>n;
    n-=4;
    for(int i=0;i<=999;i++)
      for(int j=0;j<=999;j++)
      {
          if(a[i]+a[j]+a[i+j]==n)
          {
              sum++;
          }
}
cout<<sum<<endl;
return 0;
}
