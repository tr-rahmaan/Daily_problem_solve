#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n, x;
        cin >> n >> x;

        if (n <= 2) {
            cout << "1" << '\n';
        } else {
            int apt = n - 2;
            if(apt%x!=0) cout<<(apt/x) + 2<< endl;
            else cout << (apt/x)+1<<endl;
        }
    }
    return 0;
}
