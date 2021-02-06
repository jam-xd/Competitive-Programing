//http://codeforces.com/contest/1473/problem/C
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
    QuieroComer

    int casos; cin>>casos;
    while(casos--){
        int n,k; cin>>n>>k;
        int diff = n-k;

        /*deque<int>jaja(k);
        for(int i=0;i<k;i++)jaja[i] = i+1;*/

        //cout<<"::";
        int pos = k-diff, ggnomas = 1;
        for(int i=1;i<pos;i++)cout<<i<<" ";
        for(int i=k;i>=pos;i--)cout<<i<<" ";
        cout<<endl;
    /// raayos.... <:'v
    }
    return 0;
}