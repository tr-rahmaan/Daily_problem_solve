#include <bits/stdc++.h>
using namespace std;


int main() {
	int q;
	cin >> q;
	while(q--)

	{
	     int n;
	     cin >> n;
	     string s;
	     cin >> s;
	     bool z=false;
	     bool o=false;
	     for(int i = 0;i < s.size() ; i++)
         {
             if(s[i]=='0') z= true;
             if(s[i]=='1') o= true;
             if(z && o) break;
         }
         if(z && o) cout <<"1"<< endl;
         else cout << n << endl;


	}

	return 0;

}


