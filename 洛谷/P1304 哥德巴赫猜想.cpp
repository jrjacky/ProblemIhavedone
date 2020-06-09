#include <iostream>
#include <cmath>
using namespace std;
int x,y,s;
int zs(int a)
{
    int l=1;
    for(int i=2;i<=sqrt(a);i++)if(a%i==0){l=0;break;}
    return l;
}
int main()
{
    int j;
    cin>>s;
    for(int k=4;k<=s;k+=2)
    {
        for(int i=2;i<=k/2;i++)
        {
            j=k-i;
            if(zs(i)==0||zs(j)==0)continue;
            if(i+j==k){cout<<k<<'='<<i<<'+'<<j<<endl;break;}
        }
    }
    return 0;
}
