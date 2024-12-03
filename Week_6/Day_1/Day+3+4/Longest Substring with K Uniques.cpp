#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    string s;
    cin >> s;
    getchar();
    n = s.size();
    cin >> k;

    map<char, int> cnt;
    int l = 0, r = 0;
    int ans = -1;

    while (r < n) {
        cnt[s[r]]++;

        if (cnt.size() == k) {
            ans = max(ans, r - l + 1);
        } else {

            while (cnt.size() > k && l <= r) {
                cnt[s[l]]--;
                if (cnt[s[l]] == 0) {
                    cnt.erase(s[l]);
                }
                l++;
            }
        }

        r++;
    }

    cout << ans << endl;
    return 0;
}
