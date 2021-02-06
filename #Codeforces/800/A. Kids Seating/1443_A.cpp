//http://codeforces.com/contest/1443/problem/A
#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;

using namespace std;

int main()
{
    int casos; cin>>casos;
    while(casos--){
        int n; cin>>n;
        int ggnomas = 4*n;
        for(int i=0;i<n;i++){
            cout<<ggnomas<<" ";
            ggnomas=ggnomas-2;
        }
        cout<<endl;
    }
    return 0;
}