#include <iostream>
using namespace std;
int main()
{
    char a;
    long long x1,x2,y1,y2,z1,z2,n;
    cin>>x1>>a>>y1>>a>>z1;
    cin>>x2>>a>>y2>>a>>z2;
    cin>>n;
    z1=z1+60*y1+3600*x1;
    z2=z2+60*y2+3600*x2;
    n=n*(z2-z1);
    cout<<n;
}
