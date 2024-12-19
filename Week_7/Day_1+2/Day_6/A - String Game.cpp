#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        string s;
        cin >> n >> s;
        int cnt =0;
        for(int i =0;i<n-1;i+=2){
            if(s[i] != s[i+1]){

             cnt++;
             //i++;
            }

        }
         if(cnt % 2!=0 ) cout <<"Zlatan"<<'\n';
         else cout <<"Ramos"<<'\n';

    }
    return 0;
}
