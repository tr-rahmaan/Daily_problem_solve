#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>=b) {
        cout<<"0"<<endl;
        return 0;
    }
    cout<< b-a+1<<endl;
    return 0;
}
