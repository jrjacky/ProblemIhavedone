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
    string st;
    cin>>st;
    int boy=0,girl=0;
    for (int i=0;i<=st.length();i++)
    {
        if (st[i]=='b'|st[i+1]=='o'|st[i+2]=='y') boy++;
        if (st[i]=='g'|st[i+1]=='i'|st[i+2]=='r'|st[i+3]=='l') girl++; 
    }
    printf("%d\n%d\n",boy,girl);
    return 0;
}
