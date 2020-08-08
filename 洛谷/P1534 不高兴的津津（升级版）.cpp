#include <iostream>
using namespace std;
int main()
{
    int i,xx,xxx,n,xi[2]={0},sum=0;
    cin>>n;
    for (i=0;i<n;i++) {cin>>xx>>xxx;xi[1]=xx+xxx-8+xi[0];sum+=xi[1];xi[0]=xi[1];}
    cout<<sum<<endl;
    return 0;
}
