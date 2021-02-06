//http://codeforces.com/contest/1467/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define QuieroComer ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define debug(x) cout<<"--> "<<x<<endl
int const MOD = 10e9+7;

int main()
{
    //QuieroComer

    int casos; cin>>casos;
    while(casos--){
        int n; cin>>n;
        int ggnomas = 0;
        for(int i=0;i<n;i++){
            if(i==0)cout<<9;
            else if(i==1)cout<<8;
            else if(i==2)cout<<9;
            else{
                cout<<ggnomas;
                ggnomas++;
                if(ggnomas == 10)ggnomas = 0;
            }
        }cout<<endl;

    }
    return 0;
}