#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, sum = 0;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++){

         cin >> v[i];
         sum+=v[i];
        }
        if(sum<=x) cout <<"1"<< endl;
        else if(sum%x==0) cout << sum/x<< endl;
        else cout << (sum/x) +1<< endl;

    }
    return 0;
}

