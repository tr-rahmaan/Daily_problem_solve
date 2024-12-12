#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n,k;
        cin >> n >> k;
        string s,t;
        cin >> s>> t;
        int ans=1e9;
        //int sum=0;

        for(int i=0;i<s.size()-k ;i++)
        {
            int sum=0;
            int m=0;
            for(int j=i;j<k;j++){
                int fst=s[j]-'0';
                int snd=t[m] -'0';
                if(fst>snd) sum=sum+(fst-snd);
                else sum =sum+(snd-fst);
            }
            ans=min(sum,ans);
        }
        cout << ans << endl;
    }
    return 0;
}

