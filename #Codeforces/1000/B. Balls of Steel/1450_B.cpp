//http://codeforces.com/contest/1450/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;



int main()
{
    int casos; cin>>casos;
    while(casos--){

        bool puntos[100][100] = {};

        int n,k; cin>>n>>k;
        deque<pair<int,int> >jaja(n);
        bool ggnomas[n] = {};

        for(int i=0;i<n;i++)cin>>jaja[i].first>>jaja[i].second;

        bool afirmo;
        for(int i=0;i<jaja.size();i++){
         afirmo = true;

            for(int j=0;j<jaja.size();j++){
                int xk = abs(jaja[i].first - jaja[j].first);
                int yk = abs(jaja[i].second - jaja[j].second);

                if(xk + yk > k){
                    afirmo = false;
                    break;
                }
            }
            if(afirmo == true)break;
        }

        if(afirmo == true)cout<<1<<endl;
        else cout<<-1<<endl;

    }

    return 0;
}