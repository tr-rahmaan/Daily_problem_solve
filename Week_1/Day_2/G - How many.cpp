#include<bits/stdc++.h>
using namespace std;

int main(){
  long long s,p,cnt=0;
  cin>>s>>p;
  for(int i=0;i<=s;i++){
    for(int j=0;j<=s;j++){
        for(int k=0;k<=s;k++){
            if(i+j+k<=s){
                if(i*k*j<=p) cnt+=1;
            }
        }
    }
  }

  cout<<cnt<<'\n';

return 0;
}

