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
        deque<int>jaja(n), low(n), high(n);
        for(int i=0;i<jaja.size();i++)cin>>jaja[i];

        low[0] = jaja[0]; high[0] = jaja[0];
        bool afirmo = true; int kk = k-1;

        for(int i=1;i<jaja.size();i++){
            low[i] = max(low[i-1]-kk, jaja[i]);
            high[i] = min(high[i-1]+kk, jaja[i]+kk);

            //cout<<low[i]<<"_"<<high[i]<<endl;
            if(low[i] > high[i])afirmo = false;

        }

        //for(int i=0;i<low.size();i++)cout<<low[i]<<" ";
        //cout<<endl;
        //for(int i=0;i<high.size();i++)cout<<high[i]<<" ";


        if(afirmo == true && jaja[n-1] >= low[n-2]-kk
            && jaja[n-1] <= high[n-2]+kk)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }//>:v

    return 0;
}