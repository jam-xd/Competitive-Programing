//http://codeforces.com/contest/69/problem/A
#include <iostream>

using namespace std;

int main()
{
    int n; cin>>n;

    int aa = 0, bb=0,cc=0;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;

        aa = aa + a;
        bb = bb + b;
        cc = cc + c;

    }

    if(aa == 0 && bb == 0 && cc == 0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}