//http://codeforces.com/contest/1472/problem/D
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
       int n; cin>>n;
       deque<ll>pares;
       deque<ll>impares;
       for(int i=0;i<n;i++){
        ll ggnomas; cin>>ggnomas;
        if(ggnomas% 2LL == 0)pares.push_back(ggnomas);
        else impares.push_back(ggnomas);
       }

       sort(pares.rbegin(), pares.rend());
       sort(impares.rbegin(), impares.rend());

       ll alice, bob; alice = bob = 0;

       bool turn = true;
       while(true){
        if(turn == true){
            if(pares.size() > 0){
                if(pares[0] >= impares[0]){
                    alice = alice + pares[0];
                    pares.pop_front();
                }else{
                    if(impares.size() > 0){
                        impares.pop_front();
                    }else{
                        alice = alice + pares[0];
                        pares.pop_front();
                    }
                }
            }else impares.pop_front();
        }

        if(turn == false){
            if(impares.size() > 0){
                if(impares[0] >= pares[0]){
                    bob = bob + impares[0];
                    impares.pop_front();
                }else{
                    if(pares.size() > 0){
                        pares.pop_front();
                    }else{
                        bob = bob + impares[0];
                        impares.pop_front();
                    }
                }
            }else pares.pop_front();
        }

        if(pares.size() == 0 && impares.size() == 0)break;
        else turn = !turn;

       }

       if(alice == bob)cout<<"Tie"<<endl;
       else if(alice > bob)cout<<"Alice"<<endl;
       else cout<<"Bob"<<endl;
    }

    return 0;
}