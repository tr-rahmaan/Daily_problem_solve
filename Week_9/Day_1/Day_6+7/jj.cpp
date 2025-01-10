#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="codeforces";
    int q;
    cin >>q;
    while(q--)
    {
        char a;
        cin >> a;
        bool f= false;
        for(int i =0 ;i<s.size();i++){
            if(a==s[i])
            {
                f=true;
                break;
            }
        }
        if(f) cout <<"YES"<<'\n';
        else cout <<"NO"<<'\n';
    }
}
