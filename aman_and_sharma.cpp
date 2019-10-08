/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long int d;
    cin>>d;
    unsigned long int count=0;
    while(d--){
        unsigned long int r,x;
        cin>>r>>x;
        unsigned long int p=2*(22.0/7)*r;
        unsigned long int total_run=100*x;
        if(total_run>=p)
            count++;
    }
    cout<<count;
    
    return 0;
}
