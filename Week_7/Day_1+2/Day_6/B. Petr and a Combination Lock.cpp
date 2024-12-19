#include<bits/stdc++.h>
using namespace std;
int main()
{

        int n;
        cin >> n;
        bool fund=false;
        vector<int>v(n);
        for(int i=0;i<n; i++) cin >> v[i];
       // int sum =0;
        for(int mask =0;mask<(1<<n);mask++){
                int sum =0;
            for(int k=0;k<n;k++){
                if((mask>>k)&1){
                    sum+=(v[k]);
                }
                else sum-=(v[k]);
            }
        if(sum%360==0)
        {
           // cout<<"YES"<<endl;
            fund=true;
            break;
                    }
        }
        if(fund){
            cout<<"YES"<<endl;
        }
        else {

            cout <<"NO"<<endl;
        }

    return 0;
}
