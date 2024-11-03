#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, a;
    cin >> t;
    map<int, int>mp;

    for (int i = 0; i<t;i++) {
        cin >> a;
        mp[a]+=1;
    }

    int mf=0;


    for (auto [key,val] : mp) {
        mf = max(mf, val);
    }

    cout << mf;
    return 0;
}
