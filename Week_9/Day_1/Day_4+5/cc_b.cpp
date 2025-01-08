#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        vector<int> r;

        for (int i = 0;i<n; i++) cin>>v[i];

        for (int i = 0; i < n; i++) {
            bool flag = true;
            for (int j =i - 1; j >= 0; j--) {
                if (v[j] >v[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) r.push_back(1);
            else r.push_back(0);
        }

        for (int i= 0; i <n; i++) {
            if (i != n-1)
                cout<<r[i] << " ";
            else
                cout << r[i];
        }
        cout << endl;
    }

    return 0;
}
