#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
   cin>> t;
   while(t--)
   {

        int n;
        cin>>n;
        int sum=0;
        int mxsum=0;
        int ans=0;
        for(int i=1;i<=n;i++){
                for(int j=1;j<=n ;j++){
                        if(j==i) continue;
                    sum=__gcd(i,j);
                    mxsum=max(mxsum,sum);
                }
        }
        cout<<mxsum<<'\n';

   }

   return 0;

}



