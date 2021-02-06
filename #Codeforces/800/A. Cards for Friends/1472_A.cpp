//http://codeforces.com/contest/1472/problem/A
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
    int casos; cin>>casos;
    while(casos--){
        int w,h,n; cin>>w>>h>>n;
        int answer = 1, add = 1;
        while(true){
            if(w%2 == 0){
                w = w/2;
                answer = answer + add;
                add= add*2;
            }else break;
        }

        //add = 1;
        while(true){
            if(h%2 == 0){
                h = h/2;
                answer = answer + add;
                add= add*2;
            }else break;
        }

        //debug(answer);
        if(answer >= n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}