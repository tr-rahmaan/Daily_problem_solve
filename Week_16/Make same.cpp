#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s,t,v;
        cin >>s>>t >>v;

        int zer=0,on = 0;
        int zer1=0,zer2=0, zer3=0;
        int on1 =0,on2=0,on3=0;

        for (int i =0; i<n; i++) {
            if(s[i]=='0') zer1++;
            else on1++;

            if(t[i] =='0')zer2++;
            else on2++;

            if(v[i]=='0') zer3++;
            else on3++;
        }

        zer =zer1 +zer2+zer3;
        on = on1+on2 +on3;

        if (zer % 3 != 0 || on % 3 != 0) {
            cout << "-1\n";
            continue;
        }

        int ned0 = zer/3;

        int cnt=0;


        if (zer1 >ned0) cnt+=(zer1 -ned0);
        if (zer2 > ned0) cnt+=(zer2  -ned0);
        if (zer3 > ned0) cnt+=(zer3 - ned0);

        cout <<cnt<< "\n";
    }
    return 0;
}
