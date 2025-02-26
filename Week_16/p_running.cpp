#include<bits/stdc++.h>
using namespace std;

void base(int n)
{
    vector<int>v;
    if(n==0) {
        cout<<"0"<<endl;
        return;
    }
    while(n>=0)
    {
        v.push_back(n%3);
        n=n/3;
    }
    reverse(v.begin(),v.end());
    for(auto u:v) cout<<u;
    cout<<endl;
}

int main()
{
  while(1){
  int n;
  cin >> n;
  if(n<0) return 0;
  else base(n);
  }
    return 0;
}



