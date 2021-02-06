//http://codeforces.com/contest/296/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;

int main()
{
    int n; cin>>n;
    map<int,int>jaja;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        jaja[a]++;
    }

    map<int,int>::iterator it;
    bool nel = false;
    for(it = jaja.begin(); it != jaja.end();it++){
        if(n%2 == 0){
            if(it->second > n/2)nel = true;
        }else if(n%2 != 0){
            if(it->second > (n/2)+1)nel = true;
        }

        if(nel == true)break;
    }

    if(nel == true)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


    return 0;
}