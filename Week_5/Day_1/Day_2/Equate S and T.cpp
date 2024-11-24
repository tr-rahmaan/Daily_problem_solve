#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	 cin >> t;
	  while(t--){
	      string s,t;
	      int n,m;
	      cin >> n >> m;

	      cin >> s >> t;
	      if(s==t)
	      {cout << "Yes" << endl;
	      continue;
	      }
	      int sa=0,ta=0;
	      for(int i=0; i< n;i++ ){
	          if(s[i]=='a') sa+=1;
	      }
	      for(int i=0; i< m;i++ ){
	          if(t[i]=='a') ta+=1;
	      }
	      if(sa!=ta) {

	          cout <<"No"<<endl;
	          continue;
	      }
	      int sb=0 , tb=0;
	      for(int i =0;i< n;i++){
	          if(s[i]=='a') break;
	          else sb+=1;
	      }
	      for(int i =0;i< m;i++){
	          if(t[i]=='a') break;
	          else tb+=1;
	      }
	      if(sb==tb) {
	          cout <<"Yes"<<endl;
	      }
	      else {
	          cout << "No" << endl;
	      }
	  }

}
