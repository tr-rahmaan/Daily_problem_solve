#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--) {
        int x,y,tmp;
        cin >>x>>y;
       while(x!=0)
       {
           if(x>y) swap(x,y);
           else {
            tmp=x;
            x=y-x;
            y=tmp;
           }
       }
       cout << y << '\n';
    }
    return 0;
}
