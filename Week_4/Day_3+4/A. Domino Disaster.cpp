#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        string s;
         cin >> s;
         for(int i=0;i<s.size() ;i++){
            if(s[i]=='U') cout<<"D";
            else if(s[i]=='D') cout<<"U";
            else cout<<s[i];

         }
         cout<<endl;
    }

   return 0;
}
