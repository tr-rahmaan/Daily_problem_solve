#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int j=s.size()-1;
        int cnt=0;
        for(int i=0;i<s.size()/2 ;i++){
            if(s[i]!=s[j])
            {

                cnt+=1;
                j--;
            }else break;
        }
        cout<< n-(2*cnt) <<endl;
    }
    return 0;
}
