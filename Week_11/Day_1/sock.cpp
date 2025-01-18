#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int total=n,ans=0,i=1;
    while(total!=0)
    {
      total-=1;
      if(i%m==0) total+=1;
      i++;
      ans++;
    }
    cout << ans << endl;
    return 0;
}

