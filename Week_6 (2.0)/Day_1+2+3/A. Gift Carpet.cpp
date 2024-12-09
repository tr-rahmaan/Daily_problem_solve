#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string s = "vika";
        int tar = 0;

        for (int i = 0; i < m && tar < 4; i++) {
            for (int j = 0; j < n; j++) {
                if (a[j][i] == s[tar]) {
                    tar++;
                    break;
                }
            }
        }

        if (tar == 4) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
