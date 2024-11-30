#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;
        string s, t, v;
        cin >> s >> t >> v;

        bool valid = false;

        for (int i = 0; i < n; i++) {
            if (s[i] != v[i]  && t[i] != v[i]) {
                    valid = true;
                     break;
            }
        }

        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
