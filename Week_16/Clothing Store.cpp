#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z, a, b, c;
        cin >> x>>y>>z>>a>>b>> c;

        int happy =0;
        int needs =0, needl = 0;
        int remy = 0, remz = 0;

        if (x>=a) {
            happy+=a;
        } else {
            happy+=x;
            needs =a - x;
        }

        if (y >= b) {
            happy+=b;
            remy = y - b;
        } else {
            happy+= y;
            needl = b - y;
        }

        if (z >= c) {
            happy += c;
            remz = z - c;
        } else {
            happy += z;
            remz = 0;
        }
        if (needs > 0 && remz > 0) {
            int use = min(needs,remz);
            happy += use;
            needs -= use;
            remz -= use;
        }

        if (needl > 0 && remz > 0) {
            int use = min(needl,remz);
            happy += use;
            needl -= use;
            remz -= use;
        }

        if (needs > 0 && remy > 0) {
            int use =min(needs,remy);
            happy +=use;
            needs -= use;
        }

        cout << happy << "\n";
    }
    return 0;
}
