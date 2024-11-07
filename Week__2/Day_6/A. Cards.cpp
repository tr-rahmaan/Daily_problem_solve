#include <bits/stdc++.h>
using namespace std;



int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(nullptr);
     int t;
     cin>>t;
     string s;
     cin>>s;
     map<char,int>mp;
     for(int i=0;i<t;i++){
        mp[s[i]]++;
     }
    // for(auto [key,val]:mp)
     //   cout<<key<<val<<endl;
     for(auto [key,val]:mp)
     {

         if(key=='n'){
            for(int i=0;i<val;i++){
                cout<<"1"<<" ";
            }
         }
         if(key=='z'){
            for(int i=0;i<val;i++){
                cout<<"0"<<" ";
            }
         }
     }
     cout<<'\n';
     return 0;
}



