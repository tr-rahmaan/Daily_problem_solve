#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	string s="aabb";
	int j =0;
	for(int i = 1;i <=n ;i ++)

    {
        if(j==4) j=0;
        cout <<s[j];
        j++;

    }
    cout << endl;
	return 0;
}

