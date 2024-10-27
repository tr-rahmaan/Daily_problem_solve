#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int s=0,d=0;
    for(int i=1;i<=n;i++){
       if(i%2!=0){
        if(v.front() > v.back()){
            s+=v.front();
            v.erase(v.begin());
        }else{
           s+=v.back();
           v.pop_back();

        }
       }else{
             if(v.front()>v.back()){
            d+=v.front();
            v.erase(v.begin());
        }else{
           d+=v.back();
           v.pop_back();

        }

       }
    }
      cout<<s<<" "<<d<<'\n';

return 0;
}

