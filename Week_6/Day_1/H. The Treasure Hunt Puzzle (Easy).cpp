#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin >> n;
   vector<int>v(n);
   for(int i=0;i<n;i++) cin >> v[i];
   int x;
   cin >> x;
   auto it=find(v.begin(),v.end(),x);

   if(it!=v.end()) cout <<"YES"<<endl;
   else cout << "NO" << endl;

    return 0;
}
