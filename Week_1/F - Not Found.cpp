#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[26]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']+=1;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            cout<<char(i+'a')<<endl;
            return 0;
        }
    }

    cout<<"None"<<endl;
    return 0;
}
