#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int len=n*2-2;
        int front=1;
        int back=1;
        while(n>0){
	    	for(int j=0;j<front;j++){
	    	cout<<"*";
	    }
	    front++;
	    for(int i=0;i<len;i++){
	    	cout<<"#";
	    }
	    len =len-2;
	    for(int k=0;k<=back;k++){
	    	if(k==back)
	    		cout<<endl;
	    	else
	    		cout<<"*";
	    }
	    back++;
		n--;	
        }
    }
    return 0;
}
