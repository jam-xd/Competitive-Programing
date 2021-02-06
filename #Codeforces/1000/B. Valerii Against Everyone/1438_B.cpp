//http://codeforces.com/contest/1438/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dlb;

int const N = 1005;

int main(){

    int casos; cin>>casos;
    while(casos--){
        int n; cin>>n;
        set<int>jaja;
        for(int i=0;i<n;i++){
            int ggnomas; cin>>ggnomas;
            jaja.insert(ggnomas);
        }
        if(jaja.size() < n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


return 0;
}