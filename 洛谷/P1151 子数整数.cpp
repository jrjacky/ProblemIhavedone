#include <cstdio>
#include <cmath>
using namespace std;

int k,a,b,c,d,e,s1,s2,s3;
int t=0;

int main(){

    scanf ("%d",&k);

    for (int i=10000;i<=30000;i++){
        a=i/10000;
        b=(i-a*10000)/1000;
        c=(i-a*10000-b*1000)/100;
        d=(i-a*10000-b*1000-c*100)/10;
        e=i%10;
        s1=a*100+b*10+c;
        s2=b*100+c*10+d;
        s3=c*100+d*10+e;
        if (s1%k==0&&s2%k==0&&s3%k==0){
            printf ("%d\n",i);         
            t++;
        }
    }
    if (t==0)
      printf ("No");

    return 0;    

}
