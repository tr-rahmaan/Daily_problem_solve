#include<bits/stdc++.h>
using namespace std;

int main()
{

 int n,k;
 cin >> n >> k;

 map<int,int>mp;
 for(int i = 0 ; i < n ; i++)
 {
     int x;
     cin >> x;
     mp[x]++;
 }

 int cnt=0,ans=0;
 for(auto [key,val] : mp)
 {
     cnt+=val%2;
     ans+=(val/2)*2;
 }

 ans+=(cnt+1)/2;
 cout <<ans<<endl;
    return 0;
}
