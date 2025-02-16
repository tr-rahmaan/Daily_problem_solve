#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int x = (n + 1) / 2;
    while (x % m != 0 && x <= n) {
        x++;
    }

    if (x % m == 0 && x <= n)
        cout << x << endl;
    else
        cout << "-1" << endl;

    return 0;
}
