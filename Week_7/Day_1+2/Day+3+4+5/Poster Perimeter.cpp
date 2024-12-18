#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--){
        int n, m, k;
        cin >> n >> m >> k;
        int ans = INT_MAX;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                int p = 2*(i + j);
                ans = min(ans ,abs(k-p));
            }
        }

        cout << ans <<'\n';
    }
    return 0;
}
