#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string s = "";
    for (int i = 0; i < 50; i++) {
        s += "Yes";
    }

    int n;
    cin >> n;

    while (n--) {
        string t;
        cin >> t;

        bool found = false;

        for (int i = 0; i < s.size(); i++) {
            if (i + t.size() <= s.size() && s.substr(i, t.size()) == t) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
