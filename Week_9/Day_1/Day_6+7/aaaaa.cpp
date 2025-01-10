#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i =0; i<n;i++) cin >> v[i];
        int cnt= 0;

        for(int i =0; i< n; i++) {

        for(int j=i+1; j<n; j++) {
          if( (v[j]-v[i])== (j-i)) {
                    cnt +=1;
                }
            }
        }
       cout << cnt << '\n';
    }
    return 0;
}
