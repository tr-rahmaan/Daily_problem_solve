#include<bits/stdc++.h>
using namespace std;

int main()
{

   int t;
   cin >> t;
   while(t--)
   {

       int n,d;
       cin >> n >>d ;
       vector<int>v(n);
       //sort(v.begin(),v.end());
       for(int i = 0;i< n ;i ++) cin >> v[i];
       sort(v.begin(),v.end());

       bool ok=false;
       for(int i = 1;i<n; i++)
       {


           if(v[i]+v[i-1]<=d)
           {
               ok=true;
               break;
           }
       }

       if(v[n-1] <=d || ok) cout <<"YES"<<'\n';

       else cout <<"YES"<<'\n';
   }

    return 0;
}

