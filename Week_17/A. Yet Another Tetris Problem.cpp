#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        bool od=false,ev=false;
        while(n--){
            int x;
            cin >> x;
            if(x%2==0) ev=true;
            if(x%2==1) od= true;
        }

        if(od && ev) cout <<"NO"<<endl;
        else cout <<"YES"<<endl;
    }

    return 0;
}
