
#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    string s;
    int n;
    cin>>n;
    cin>>s;
    int in,en;
    for(int i=0;i<s.size();i++){
        if(s[i]=='B') {
            in=i;
            break;
        }
    }

    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='B'){
            en=i;
            break;
        }
    }

    cout<<en-in+1<<'\n';

 }
 return 0;
}
