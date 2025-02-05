#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        int cnt = 0;
        int j = b.size() - 1;

        for (int i = a.size() - 1; i >= 0; i--) {
            if (j >= 0 && a[i] == b[j]) {
                j--;
            } else {
                cnt += (j + 1);
            }
        }

        if (j != (b.size()-1)) {
            cout << "-1" << endl;
        } else {
            cout << cnt << endl;
        }
    }
    return 0;
}
