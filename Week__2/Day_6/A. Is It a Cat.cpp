#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string t;
        t.clear();
        for(int i=0;i<s.size();i++){

            if(t.empty() || s[i]!=t.back()) t+=s[i];
        }

        if(t=="meow") cout<<"YES"<<endl;
        else cout <<"NO"<<endl;
    }
    return 0;
}
