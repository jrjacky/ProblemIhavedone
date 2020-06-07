#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<ctime>
#include<cstring>
#include<cctype>
using namespace std;
int n,a[100001],s;
long long m,sum;
int main(){
    cin>>n>>m; 
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(sum+a[i]>m)
        {s++;
        sum=0;
        i--; 
        }
        else {sum+=a[i];}
    }
    cout<<s+1; 
    return 0;
}
