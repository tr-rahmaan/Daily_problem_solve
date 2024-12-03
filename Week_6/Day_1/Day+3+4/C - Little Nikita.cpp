#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >>q;
    while(q--) {
	int n,m;
	cin >> n >> m;
	int df=(n-m);
	if(n>= m && df%2==0) cout <<"Yes"<<endl;
	else cout <<"No"<<endl;
    }

}


