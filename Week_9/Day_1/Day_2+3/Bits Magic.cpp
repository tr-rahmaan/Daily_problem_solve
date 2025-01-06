#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        unsigned int n, k;
        cin >> n >> k;
        n = n | (1u << k);
        cout << n << endl;
    }

    return 0;
}
