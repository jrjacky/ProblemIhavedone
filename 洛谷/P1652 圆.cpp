#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int a[100000],b[10000],c[10000];
    int x1,x2,y1,y2,i,sum=0,n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    for(int i=1;i<=n;i++)cin>>c[i];
    cin>>x1>>y1>>x2>>y2;
    for(int i=1;i<=n;i++){
        if((((a[i]-x1)*(a[i]-x1)+(b[i]-y1)*(b[i]-y1))<=c[i]*c[i])&&(((a[i]-x2)*(a[i]-x2)+(b[i]-y2)*(b[i]-y2))>c[i]*c[i]))sum++;
        if((((a[i]-x2)*(a[i]-x2)+(b[i]-y2)*(b[i]-y2))<=c[i]*c[i])&&(((a[i]-x1)*(a[i]-x1)+(b[i]-y1)*(b[i]-y1))>c[i]*c[i]))sum++;
    }
    cout<<sum;
    return 0;
}
