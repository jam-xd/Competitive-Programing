//http://codeforces.com/contest/1473/problem/B
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

int lcm(int a, int b){
    int ggnomas;
    if(a > b)ggnomas = a;
    else ggnomas = b;
    while(true){
        if(ggnomas%a == 0 && ggnomas%b == 0)break;
        else ggnomas++;
    }
    return ggnomas;
}

int main()
{
    QuieroComer

    int casos; cin>>casos;
    while(casos--){
        string s,t; cin>>s>>t;
        string ss = s, tt = t;
        int reach = lcm(s.size(), t.size());
        int rs = reach/s.size(), rt = reach/t.size();

        for(int i=1;i<rs;i++)s = s + ss;
        for(int i=1;i<rt;i++)t = t + tt;

        //debug(s);
        //debug(t);

        bool confirmo = true;
        for(int i=0;i<s.size();i++){
            if(s[i] != t[i]){confirmo = false; break;}
        }

        if(confirmo == true)cout<<s<<endl;
        else cout<<-1<<endl;

    }
    return 0;
}