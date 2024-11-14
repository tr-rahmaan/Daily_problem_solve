#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;

        int x = s.size();
        int y = t.size();

        if (s == t) {
            cout << "=" << endl;
        }
        else if (s.back() == 'M') {
            if (t.back() == 'S') {
                cout << ">" << endl;
            } else {
                cout << "<" << endl;
            }
        }
        else if (t.back() == 'M') {
            if (s.back() == 'L') {
                cout << ">" << endl;
            } else {
                cout << "<" << endl;
            }
        }
        else if (s.back() == 'S' && t.back() == 'L') {
            cout << "<" << endl;
        }
        else if (s.back() == 'L' && t.back() == 'S') {
            cout << ">" << endl;
        }
        else if (s.back() == t.back()) {
            if (s.back() == 'S') {
                if (x > y) {
                    cout << "<" << endl;
                } else {
                    cout << ">" << endl;
                }
            } else {
                if (x < y) {
                    cout << "<" << endl;
                } else {
                    cout << ">" << endl;
                }
            }
        }
    }
    return 0;
}
