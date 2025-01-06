#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
       int n;
       cin >> n;
       bool pos=false;
       for(int i =0 ;i*3<=n;i++ )
       {
           if((n-i*3)%4==0)pos=true;

       }
       if(pos) cout <<"YES"<< endl;
       else cout <<"NO"<<endl;
    }

    return 0;
}

