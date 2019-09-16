#include<iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int x=0,y=0;
    int len=s.length();
    for(int i=0;i<len;i++){
        if(s[i]=='L')
            x--;
        else if(s[i]=='R')
            x++;
        else if(s[i]=='U')
            y++;
        else
            y--;
    }
    cout<<x<<" "<<y;
    
    return 0;
}
