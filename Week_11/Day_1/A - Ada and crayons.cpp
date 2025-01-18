#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int up=0, down=0;

        for (int i = 0; i <s.size() ; i++) {
            if (s[i] =='U') {
                up++;
                for (int j=i+1; j < s.size();j++) {
                    if (s[j]!='U') {
                        i=j-1;
                        break;
                    }
                }
            } else if (s[i]=='D') {
                down++;
                for (int j=i+1; j<s.size();j++) {
                    if (s[j]!='D') {
                        i=j-1;
                        break;
                    }
                }
            }
        }
     //if(s[s.size()-1]=='U')
       cout << up << down<<endl;
        cout<<min(up, down) <<'\n';
    }
    return 0;
}
