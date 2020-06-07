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
    int a[10001], n;
    int ans=0;
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> a[i];
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i;j<=n;j++)
            if(a[i] > a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
                ans++;
            }
    }
    cout << ans;
    return 0;
}
