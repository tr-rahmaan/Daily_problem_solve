#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int up=0, down=0;
        int n=s.size();
        for (int i = 0; i <n; i++) {
            if (s[i] =='U') {
                up++;
                for (int j=i; j < s.size();j++) {
                   // if(j==n-1 ) i=j;
                    if (s[j]!='U' ) {
                          //  if(j==n-1 ) i=j;
                        // else
                            i=j-1;
                        break;
                    }
                }
              //  cout << up <<"cc" << i << endl;
            } else if (s[i]=='D') {
                down++;
                for (int j=i; j<s.size();j++) {
                         if(j==n-1 ) i=j;
                    if (s[j]!='D') {
                       // if(j==n-1) i=j;
                        //else
                        i=j-1;
                        break;
                    }
                }

                 // cout << down<<"dd" << i << endl;
            }
        }

        //cout << up << " " <<down << endl;

        cout<<min(up , down) <<'\n';
    }
    return 0;
}
