#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<ctime>
#include<cstring>
#include<cctype>
using namespace std;
int main(){
    int s[10]={0},m,n,i,j,u;
    cin>>m>>n;
    for(i=m;i<=n;i++){
        u=i;
        while(u){
            s[u%10]++;
            u=u/10;
        }
    }
    for(i=0;i<10;i++){
        cout<<s[i]<<" ";
    }
    return 0;
}
