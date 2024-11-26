#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        string t;
        cin >> n >> t;

        string s = "";
        for (int i = n - 1; i >= 0; ) {
            if (t[i] == '0') {
                int num = (t[i - 2] - '0') * 10 + (t[i - 1] - '0');
                s += char(num - 1 + 'a');
                i -= 3;
            } else {
                int num = t[i] - '0';
                s += char(num - 1 + 'a');
                i--;
            }
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}
