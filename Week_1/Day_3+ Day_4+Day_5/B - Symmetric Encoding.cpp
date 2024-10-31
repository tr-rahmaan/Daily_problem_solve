#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >>s;

        string r = s;
        sort(r.begin(),r.end());
        r.erase(unique(r.begin(), r.end()), r.end());

        int siz = r.size();


        for (int i = 0; i < n; i++) {
            int p = r.find(s[i]);
           s[i] = r[siz - p - 1];
        }

        cout <<  s << "\n";
    }
    return 0;
}

