#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--) {
  int n;
  cin >> n;
  string a,b;
  cin>>a>>b;
  int chef=0,fina=0;
  for(int i=0;i<n ;i++){
    if(a[i]==b[i]){
        continue;
    }else if(a[i]=='R' && b[i]=='S'){
        chef+=1;

    }else if(b[i]=='R' && a[i]=='S'){
      fina+=1;
    }else if(a[i]=='S' && b[i]=='P'){
      chef+=1;
    }else if(b[i]=='S' && a[i]=='P'){
      fina+=1;
    }else if(a[i]=='P' && b[i]=='R'){
      chef+=1;
    }else if(b[i]=='P' && a[i]=='R'){
      fina+=1;
    }

  }
   // cout<<chef<<" "<<fina<<'\n';
     //if(chef+1==fina) cout<<"1"<<'\n';
      if(chef>fina) cout<<"0"<<'\n';
     else cout<<(fina-chef)/2+1<<'\n';
  }

   return 0;
}





