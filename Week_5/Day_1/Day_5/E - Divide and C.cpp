#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        long long sum = 0;
        int  mn = 1e9 ;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if(a[i]!=1 && a[i]%2==1){
                mn=min(mn,a[i]);
            }
        }
        int x=double(mn);
        int cnt =0;

        if (sum % 2 == 0) {
            cout << 0 << endl;
            continue;
        }
        while(1){
            mn=mn/2;
            cnt++;
            if(mn==1 || mn<1) break;
        }
       cout << cnt << endl;

    }
    return 0;
}
