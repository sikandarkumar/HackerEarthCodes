#include <bits/stdc++.h>   
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
    crap;
    int n,q,type,bit;
    cin>>n>>q;
    int a[n];
    bool ans;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    while(q--){
        cin>>type;
        if(type==1){
            cin>>bit;
            if(a[bit]==0){
                a[bit]=1;
            }
            else{
                a[bit]=0;
            }
        }
        if(type==0){
            int left,right;
            cin>>left>>right;
            if(a[right]==1){
                cout<<"ODD"<<"\n";
            }
            else{
                cout<<"EVEN"<<"\n";
            }
        }
    }
    return 0;
}
