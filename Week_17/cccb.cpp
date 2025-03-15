#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >>x>>y>>k;

        int d =abs(x-y);

        if (d==k) {
            cout << "0\n";
        }
        else if (d>k) {
            if ((d - k) % 2 == 0) cout <<(d-k)/2<<endl;
            else cout << "-1\n";
        }
        else {
            if ((k-d)%2==0) cout <<(k-d)/2 <<endl;
            else cout << "-1\n";
        }
    }
}
