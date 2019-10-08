#include<iostream>

using namespace std;

int main(){
    unsigned long int t;
    cin>>t;
    int a=0,b=7;
    while(t--){
        int n;
        cin>>n;
        int a_diff=abs(n-a);
        int b_diff=abs(n-b);
        if(a_diff<b_diff){
            a=n;
            cout<<"A"<<endl;
        }
        else if(b_diff<a_diff){
            b=n;
            cout<<"B"<<endl;
        }
        else if(a_diff==b_diff){
            a=n;
            cout<<"A"<<endl;
        }
    }
    
    return 0;
}
