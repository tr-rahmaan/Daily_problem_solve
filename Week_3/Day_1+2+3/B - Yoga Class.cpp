 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int t;
    cin>>t;
    while(t--){
       int n,x,y;
       cin>>n>>x>>y;
       int total=n*x;
       int doub=((n/2)*y)+((n%2)*x);
       cout<<max(total,doub)<<'\n';
    }
     return 0;
 }


