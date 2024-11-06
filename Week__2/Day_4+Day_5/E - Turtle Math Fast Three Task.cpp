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
        vector<int> v(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }

        bool ans = false;
        if (sum % 3 == 0) {
            cout << "0" << '\n';
        } else {
            for (int i = 0; i < n; i++) {
                if ((sum - v[i]) % 3 == 0) {
                    ans = true;
                    break;
                }
            }

            if (ans) {
                cout << "1" << '\n';
            } else {
                cout << "2" << '\n';
            }
        }
    }
    return 0;
}
