#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--) {
        int n;
        string s;
        cin >>n>>s;
        int sum = 0;
       for(int i = 0;i< s.size();i++)
       {
           if(s[i]==s[i+1] && i<n-1){
            sum+=1;
            i++;
           }else{
             sum+=1;
           }
       }
       cout << sum << endl;
    }
}
