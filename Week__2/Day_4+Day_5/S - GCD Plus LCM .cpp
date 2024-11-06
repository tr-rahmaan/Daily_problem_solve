#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long int a, b;
        cin>>a>>b;

        long long int ab=__gcd(a, b);
        if (ab +((a / ab)*b)==a + b) {
            cout <<"true"<<endl;
        } else {
            cout <<"false"<< endl;
        }
    }

    return 0;
}
