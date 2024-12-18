#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--){
         int n;
         cin >> n;
         vector<long long int > v(n);
         for(int i =0 ;i < n;i++) cin >> v[i];
         sort(v.begin(),v.end());
         long long int sum=v[0];
         //cout << sum << endl;
         int j=1;
         for(int i = 1 ;i< n ;i ++ )
         {
             if(v[i]>0) {
                    v[i]=v[i]-j;
                    j++;
                    };
                    //cout << v[i] << endl;
                    if(v[i]> 0 )
                    sum=sum+v[i];
         }
         cout << sum << '\n';
    }
    return 0;
}

