#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,q;
        cin >>n>>q;

        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            cin >>v[i];
        }


        sort(v.rbegin(), v.rend());


        vector<long long> sum(n);
        sum[0] = v[0];
        for (int i = 1; i < n; i++) {
            sum[i] = sum[i - 1] + v[i];
        }

        while (q--) {
            long long x;
            cin >> x;

            int l = 0, r = n - 1, ans = -1;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (sum[mid] >= x) {
                    ans = mid + 1;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
