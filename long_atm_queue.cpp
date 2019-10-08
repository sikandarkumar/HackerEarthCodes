#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;



int main()
{   
    fast;
    int n;
    cin>>n;
    vector<int>height(n);
    for(int i=0;i<n;i++)cin>>height[i];
    
    int count_=1;
    int first,second;
    for(int i=0;i<n-1;i++){
        first=height[i];
        second=height[i+1];
        if(second>=first){
            continue;
        }
        else{
            count_++;
        }
    }
    cout<<count_;
    
    return 0;
}
