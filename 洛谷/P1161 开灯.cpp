#include<iostream> 
using namespace std;
int e[500001]={0};
int main()
{
    double a;
    int n;
    cin>>n; 
    int b,c;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>c; 
        for(int j=1;j<=c;j++) 
        e[(int)(a*j)]++; 
    }
    for(int i=1;;i++)
    if(e[i]%2==1) 
    {
        cout<<i<<endl; 
        break; 
    }
    return 0; 
}
