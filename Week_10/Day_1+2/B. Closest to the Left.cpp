#include<bits/stdc++.h>
using namespace std;

int main()
{

  int n,k;
  cin >> n >> k;
  vector<int>v(n);
  for(int i = 0;i<n ;i++) cin >> v[i];
  while(k--){
    int key;
    cin >> key;
    int l =0,r=n-1,ans=-1;
    int mid;
   // mid= (r+l)/2;
    while(l<=r)
    {
    //int l =0,r=n-1,ans=-1;
        // int mid;
       mid= (r+l)/2;
        if(v[mid]>key)
        {
            r=mid-1;
        }else {
           l=mid+1;
           ans=mid;
        }
    }
      cout << ans+ 1<< endl;
  }
    return 0;
}



