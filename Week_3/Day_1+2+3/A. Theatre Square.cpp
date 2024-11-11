#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    int side=__gcd(a,b);
    cout<<(side*side)/c<<endl;
   return 0;
}

