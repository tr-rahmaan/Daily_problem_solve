#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i =0 ;i < n;i++) cin >> v[i];
    while(k--)
    {
        int a;
        cin >> a;
        int l=0,r=n-1,mid;
        bool found = false;
        while(l<=r){
            mid=(r+l)/2;
            if(a==v[mid])
            {
                found=true;
                break;
            }
            else if(a<v[mid] ){
                    r=mid-1;

            }else {
                l=mid+1;
            }
        }
        if(found) cout <<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
