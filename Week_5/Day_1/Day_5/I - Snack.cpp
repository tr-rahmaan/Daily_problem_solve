#include <bits/stdc++.h>
using namespace std;

int main() {
    long long  a, b;
    cin>>a>>b;

    long long g = __gcd(a, b);

   long long mn = a*(b/g);

    cout << mn << endl;
    return 0;
}
