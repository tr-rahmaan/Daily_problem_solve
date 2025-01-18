#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s>>t;
    bool yes  = false;
    if(s.size()<t.size()) yes = false;

     else if (s.size()==t.size() && s==t ) yes= true;
     else
     {


        for (int i = 0; i <= s.size() - t.size(); i++) {
        if (s.substr(i,t.size())==t) {
            yes =true;
            break;
        }
    }
     }

    if(yes) cout <<"YES"<<endl;
    else cout <<"NO"<< endl;

    return 0;
}
