#include <bits/stdc++.h>
using namespace std;

int main() {
	 int q;
	 cin >> q;
	 while (q--){

	     int total=0,dif=0;
	     int n;
	     string a,b;
	     cin >> n >> a >> b;
	     for(int i =0 ;i< n;i++)
	     {
	         if(a[i]=='1' && b[i]=='1') total+=1;
	         if(a[i] != b[i]) dif+=0;
	     }

	     if(total%2==1 ) cout <<"YES"<<'\n';
	     else if(dif>0) cout <<"YES" <<'\n';
	     else cout <<"NO"<<'\n';
	 }
}

