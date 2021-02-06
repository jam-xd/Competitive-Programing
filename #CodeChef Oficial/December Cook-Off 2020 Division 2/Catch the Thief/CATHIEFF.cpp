//https://www.codechef.com/COOK125B/problems/CATHIEF
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define QuieroComer ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
int const MOD = 10e9+7;


int main()
{
    QuieroComer

    int casos; cin>>casos;
    while(casos--){
        int police, thief, k, n;
        cin>>police>>thief>>k>>n;

        int diff = max(police, thief) - min(police, thief);
        if(diff % k == 0 && diff >= 2*k && (diff/k)%2==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }



    return 0;
}
