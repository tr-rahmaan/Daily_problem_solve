#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
   cin>> t;
   while(t--)
   {

    int n;
    cin>>n;
    bool van=false;
    bool vob=false;
    for(int i=1;i<=10;i++){
        if(i%2!=0){
            if((n-1)%3==0 || (n+1)%3==0){
                van=true;
                break;
            }else{

              n+=1;


            }
        }else{

            if((n-1)%3==0 || (n+1)%3==0){
                vob=true;
                break;
            }else{

              n+=1;


            }
        }
    }
    if(van) cout<<"First"<<'\n';
    if(vob) cout<<"Second"<<'\n';



   }

   return 0;

}

