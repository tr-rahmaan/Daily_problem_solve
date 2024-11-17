#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
        int n,k;
        string s;
        cin >> n>> k;
        cin >> s;
        //if(n==1) {
         //       cout<< "YES\n";
          //      continue;
       // }
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        //for(auto [key ,val]: mp){
         //   cout<<"ch->"<<key<<"="<<val<<endl;
        //}
        int cnt =0;
        for(auto [key,val] : mp){
            if(val%2!=0) cnt+=1;
        }
        if(cnt<= k+1  ) cout<< "YES\n";
        else cout << "NO\n";


  }
     return 0;
}
