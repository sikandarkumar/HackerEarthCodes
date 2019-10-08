#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{   
    fast;
    int n,q;
    cin>>n>>q;
    vector<long int>v(n+1), sum(n+1,0);
    v[0]=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        sum[i]=sum[i-1]+v[i];
    }
    while(q--)
    {
        int L,R;
        cin>>L>>R;
        cout<<(sum[R]-sum[L-1])/(R-L+1)<<endl;
    }
    
    
    return 0;
}
