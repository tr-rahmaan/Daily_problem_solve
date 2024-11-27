#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    int c=1;
    while (q--) {
            int n;
            cin >> n;
            vector<pair<int,int>>p;
            for(int i=2;i<sqrt(n);i++){
                    int cnt =0;

                    while(n%i==0){
                            cnt++;

                   p.push_back({i,cnt});
                   n=n/i;

            }
            if(n<=3) {
                p.push_back({n,1});
            }
            }

            cout << "Case " << c << ": ";
        for (int i = 0; i < p.size(); i++) {
            cout << p[i].first << "(" << p[i].second << ")";
            if (i != p.size() - 1) {
                cout << " * ";
            }
        }
            cout<<endl;
            c++;

    }
    return 0;
}

