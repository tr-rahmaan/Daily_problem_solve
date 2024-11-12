#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        if (s.size() % 2 != 0) {
            cout << "NO" << endl;
        } else {
            int n = s.size() / 2;
            string first = s.substr(0, n);
            string second = s.substr(n, n);

            if (first == second) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
