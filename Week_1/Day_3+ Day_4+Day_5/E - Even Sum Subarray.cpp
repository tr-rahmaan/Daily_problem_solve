#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        long long sum=0;
        int even=0;

        for (int i= 0; i<n;i++) {
            cin>>arr[i];
        }

        for (int i =0; i<n;i++) {
            sum = 0;
            for (int j=i; j<n;j++) {
                sum+=arr[j];
                if (sum%2==0) {
                    even=max(j-i+1,even);
                }
            }
        }

        cout<<even<<'\n';
    }
    return 0;
}
