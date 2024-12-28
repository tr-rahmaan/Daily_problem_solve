#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, int>mp;
    string s;
    cin >> s;

    for (auto u : s) {
        mp[u]++;
    }

    string fst ="", lst ="", md ="";
    int cnt=0;

    for (auto it:mp) {
        char ch= it.first;
        int  val=it.second;

        if ( val % 2 != 0) {
            cnt++;
            md = ch;
            if (cnt > 1) {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
        }
        for(int i = 0 ;i<val/2 ;i++ )
        {
            fst=fst+ch;
        }

    }

    lst = fst;
    reverse(lst.begin(), lst.end());
    cout << fst + md + lst << endl;

    return 0;
}
