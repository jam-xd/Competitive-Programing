//http://codeforces.com/contest/697/problem/A
#include <iostream>

using namespace std;

int main()
{
    int t,s,x;
    bool confirmo = false;
    cin>>t>>s>>x;

    int i = t+s, j = t+s+1;
    //cout<<i<<" "<<j<<endl;
    if(t == x){
        cout<<"YES"<<endl;
    }else{
    while(i<=x){
        if(i == x || j == x and i != x){
            confirmo = true;
            break;
        }
        i = i + s;
        j = j + s;
   //cout<<"i: "<<i<<" "<<"j: "<<j<<endl;
    }

    if(confirmo == true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }

    return 0;
}