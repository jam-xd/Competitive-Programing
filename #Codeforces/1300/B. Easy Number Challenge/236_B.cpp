//http://codeforces.com/contest/236/problem/B
#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000005
#define MOD 1073741824
 
ll d(ll current){
    ll answer = 0;
    ll i;
    for(i=1;i*i<current;i++)if(current%i == 0)answer = answer + 2;
    if(i*i == current)answer++;
 
    return answer;
}
ll suma_mod(ll a, ll b){
    ll answer = (a%MOD + b%MOD)%MOD;
    return answer;
}
// funcion div de standing de amigos de codeforces
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   vector<ll>acc(1000005,false);
   ll answer = 0;
   for(ll i=1;i<=a;i++){
        for(ll j=1;j<=b;j++){
            for(ll k=1;k<=c;k++){
                if(acc[i*j*k] == false) acc[i*j*k] = d(i*j*k);
                answer = suma_mod(answer,acc[i*j*k]);
            }
        }
   }
 
   cout<<answer<<endl;
    return 0;
}