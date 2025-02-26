#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,j=1;
    cin >> t;
    while(t--)
    {
        int n,p,q,a;
        cin >> n >> p >> q;
        int total=q,cnt=0;
        vector<int>v(n);
        for(int i=0 ; i < n ;i++) {
            cin >> v[i];

        }
        int dim=0;
         for(int i=0 ; i < n ;i++) {
           if(dim<p && total>=v[i] )
           {
               cnt++;
               total-=(v[i]);
               dim++;
               //q=q-v[i];
           }else{
             break;
           }
        }
        cout<<"Case "<<j<<":"<<" "<<cnt<<endl;
        j++;
    }
    return 0;
}


