#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a,b;
        cin >> a >> b;
        cout << __gcd(a,b) << endl;
    }
    return 0;
}

