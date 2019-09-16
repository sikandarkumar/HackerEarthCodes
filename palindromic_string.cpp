#include<iostream>

using namespace std;

int main(){
    string str;
    cin>>str;
    int len=str.length();
    int i;
    for(i = 0; (i < len/2) && (str[i] == str[len - i - 1]); i++);

    if(i == len/2)
        cout << "YES";
    else
        cout << "NO";
    
    
    return 0;
}
