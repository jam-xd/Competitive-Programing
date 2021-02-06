//https://www.codechef.com/COOK125B/problems/ATTENDU
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
    QuieroComer/// :v
    
    int casos; cin>>casos;
    while(casos--){
       double n; cin>>n;
       deque<char>jaja(n);
       double present = 0;
       for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
        if(jaja[i] == '1')present++;
       }

       present = present + (120-n);
       //cout<<(present/120.0)*100.0<<endl;
       if((present/120)*100 >= 75.0)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }

    return 0;
}
