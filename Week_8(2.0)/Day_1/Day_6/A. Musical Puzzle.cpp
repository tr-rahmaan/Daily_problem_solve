#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        string s;
        cin >> n >> s;
        set<string>st;
        for(int i = 0;i<n-1; i++)
        {
            string t="";
            t+=s[i];
            t+=s[i+1];
            //cout << t << endl;
            st.insert(t);

        }
        cout << st.size() << '\n';
    }
    return 0;
}
