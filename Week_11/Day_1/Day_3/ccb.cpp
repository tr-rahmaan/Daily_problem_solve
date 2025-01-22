#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, cnt = 0, sum = 0;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++) {
            if (sum + v[i] <= x) {
                sum += v[i]; // Add to the current group
            } else {
                cnt++;      // Start a new bottle
                sum = v[i]; // Start with the current bottle's water
            }
        }

        // Check for leftover water in the last group
        if (sum > 0) {
            cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}
