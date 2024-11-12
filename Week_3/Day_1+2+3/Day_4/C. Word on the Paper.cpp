#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
             char s[8][8];
             string t="";
            for(int i=0;i<8;i++){
                for(int j=0;j<8;j++){
                     cin>>s[i][j];
                     if(isalpha(s[i][j])){
                        t+=s[i][j];
                     }
                }
            }
            cout<<t<<'\n';
    }
    return 0;
}

