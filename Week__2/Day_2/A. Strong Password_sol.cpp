#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {


    string s;
    cin>>s;
    bool done=false;
    for(int i=0;i<s.size();i++){
       cout<<s[i];
       if(i<s.size()-1 && s[i]==s[i+1] && !done ){
            if(s[i]=='z'){
                cout<<"y";
                done=true;
            }else  {
           cout<<char(s[i]+1);
           done=true;
            }
       }

    }
    if(!done){
        if(s[s.size()-1]!='a'){
            cout<<"a";
        }else{
           cout<<"b";
        }
    }
    cout<<endl;

   }

   return 0;

}

