#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<string>v;

    while (n--) {

        string s;

        cin>>s;

        bool fund = false;
        for (auto u: v) {
            if (u == s) {
                fund = true;
                break;
            }
        }

        if (fund) {
            cout <<"YES"<<endl;;
        } else {
            cout << "NO "<< endl;
            v.push_back(s);
        }
    }
    return 0;
}
