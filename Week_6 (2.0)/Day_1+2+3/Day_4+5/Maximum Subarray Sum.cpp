#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    long long sum=-1e18;
    long long mxsum=-1e18;
    for(int l=0;l<n;l++){
        sum=max((long long)v[l],sum+v[l]);
        mxsum=max(mxsum,sum);
    }
    cout << mxsum << endl;
  return 0;
}
