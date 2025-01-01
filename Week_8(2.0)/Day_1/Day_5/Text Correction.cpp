#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string t;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ' && (i+1< s.size()&&(s[i +1] == ',' ||s[i + 1] == '.'))) {
            continue;
        }
        t += s[i];
    }

    cout << t << endl;
    return 0;
}
