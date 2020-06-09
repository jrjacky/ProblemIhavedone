#include<iostream>
#include<cstdio>
using namespace std;
int k,n,a[10010],s,p=1;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
      cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        s=0;
        if(a[i+1]==a[i]+1)
        for(int j=i;j<=n;j++)
        {
            s++;
            if(a[j+1]!=a[j]+1)
            break;
        }
        if(s>p)
        p=s;
    }
    cout<<p;
    return 0;
}
