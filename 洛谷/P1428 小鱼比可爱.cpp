
#include<iostream>
using namespace std;
int a[101]={0};
int b[101];
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    b[1]=0; 
    for(int j=1;j<=n;j++)
    {
        for(int k=j+1;k<=n;k++)
        {
            if (a[k]>a[j])
            {
                b[k]++;
            }
        }
    }
    for(int m=1;m<=n;m++)
    {
        cout<<b[m]<<" ";
    }
    return 0;
}
