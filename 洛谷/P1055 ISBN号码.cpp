#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[20];
    int i,ans=0,sum=0;
    cin>>s;
    for(i=0;i<=11;i++){
        if(s[i]>=48&&s[i]<=57){
            sum++;
            ans+=sum*(s[i]-48);
        }
    }
    ans%=11;
    ans+=48;
    if(ans==58)  ans='X';
    if(ans==s[12])  cout<<"Right"<<endl;
    else {
      s[12]=ans;
      for(i=0;i<=12;i++)  cout<<s[i];
      cout<<endl;
    }
    return 0;
}
