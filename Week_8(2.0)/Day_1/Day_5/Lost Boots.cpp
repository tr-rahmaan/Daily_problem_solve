#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int l[31] = {0};
        int r[31] = {0};

        for (int i = 0; i < n; i++) {
            int m;
            char c;
            cin >> m >> c;

            if (c == 'E') {
                l[m - 30]++;
            } else if (c == 'D') {
                r[m - 30]++;
            }
        }

        int p = 0;
        for (int i = 0; i < 31; i++) {
            p += min(l[i], r[i]);
        }

        cout << p << endl;
    }

    return 0;
}

