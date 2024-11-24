#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin>>n;
        string t;
        cin>>t;

        string s="";
        int i = 0;

        while (i < n) {
            if (i+1<n && t[i+1]=='0') {
                int num = (t[i] - '0') * 10 + (t[i + 1] - '0');
                s += (char)(num + 'a'-1);
                i += 2;
            } else {

                s += (char)(t[i]-'0'+'a'-1);
                i++;
            }
        }
        cout <<s<< endl;
    }
    return 0;
}
