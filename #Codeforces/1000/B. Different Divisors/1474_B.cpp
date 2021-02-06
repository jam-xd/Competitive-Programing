//http://codeforces.com/contest/1474/problem/B
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

deque<ll>current;

ll divisores (ll n){
    //current.clear();
    int answer = 0;
    ll i;
    for(i=1;i*i<n;i++)if(n%i == 0)answer = answer + 2;
    /*current.push_back(i);
    current.push_back(n/i);*/
    

    if(i*i == n)answer++;
    //current.push_back(i);
    return answer;
   }

int main()
{

   int casos; cin>>casos;
   while(casos--){
       ll d; cin>>d; //d = 3 r = 55, no 35
       ll a = d;
       while(true){
           a++;
           if(divisores(a) == 2)break;
       }
       ll b = a+d-1;
       while(true){
           b++;
           if(divisores(b) == 2)break;
       }
       cout<<a*b<<endl;
   }

    return 0;
}