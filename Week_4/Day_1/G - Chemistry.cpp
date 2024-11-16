#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        if (n == 1) {
            cout << "YES\n";
            continue;
        }

        map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }

        int cnt = 0; // Count of odd frequencies
        for (auto [key, val] : mp) {
            if (val % 2 != 0) cnt++;
        }

        // Debugging outputs
        // cout << "Odd frequencies: " << cnt << ", Remaining length: " << (n - k) << endl;

        if (cnt <= k && (n - k) % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
