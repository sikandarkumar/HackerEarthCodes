#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;



int main()
{   
    fast;
    int t;
    int a[100000];
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int* i; 
        i = std::min_element(a, a+n);
        if(k-*i<0){
            cout<<0<<"\n";
        }
        else{
            cout<<k-*i<<"\n";
        }
    }
    
    
    return 0;
}
