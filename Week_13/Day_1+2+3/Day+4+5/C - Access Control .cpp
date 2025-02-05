#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int have=0; bool ok=true;
        string s;
        cin >> s;
        for(int i = 0;i<n;i++ )
        {
            if(s[i]=='1') have=x;
            else {

                if(have==0){
                    ok=false;
                    break;
                }else{
                 have--;
                }
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
