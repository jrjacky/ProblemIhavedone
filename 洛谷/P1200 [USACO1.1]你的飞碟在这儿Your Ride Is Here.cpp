#include <iostream>
#include <string>
using namespace std;
int main() {
    const char* strTable[] = {"GO","STAY"};
    string strNames[2];
    long strCharTotals[2] = {1,1};
    cin >> strNames[0] >> strNames[1]; 
    for(int i=0;i<2;i++){
        string strName = strNames[i];
     for(int j=0;j<strName.length();j++)
      strCharTotals[i] *= (int)strName[j] - 64;
    strCharTotals[i] %= 47;
    }
    cout << strTable[strCharTotals[0] != strCharTotals[1]] << endl;
    return 0;
}
