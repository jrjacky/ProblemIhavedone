#include<iostream>
using namespace std;
int day[8]={0};
int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int n,xq=1;
    cin>>n;
    for(int i=1900;i<1900+n;i++){
        if((i%4==0&&i%100!=0)||i%400==0) mon[1]=29;
        else mon[1]=28;
        for(int j=0;j<12;j++){
            for(int c=1;c<=mon[j];c++){
                if(c==13) day[xq]++;
                xq++;
                if(xq>7) xq=1;
            }
        }
    }
    cout<<day[6]<<" "<<day[7]<<" ";
    for(int i=1;i<=5;i++) cout<<day[i]<<" ";
    return 0;
}
