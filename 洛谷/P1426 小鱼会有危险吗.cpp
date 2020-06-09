#include <iostream>
using namespace std;
int main()
{
    double s, x,sum;
    cin >> s >> x;
    double i = 7;sum=7;
    while ( sum< s - x)
    {
        i = i * 0.98;sum+=i;}
        if(i*0.98>=x*2)cout<<'n';
        else cout<<'y';
}
