#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int b, p, f, h, c;
        cin >> b >> p >> f >> h >> c;

        int total = 0;

        if (h > c) {
            int hum = min(b / 2, p);
            total += hum * h;
            b -= 2 * hum;

            int ck = min(b / 2, f);
            total += ck * c;
        } else {
            int ck = min(b / 2, f);
            total += ck * c;
            b -= 2 * ck;

            int hum = min(b / 2, p);
            total += hum * h;
        }

        cout << total << endl;
    }
    return 0;
}
