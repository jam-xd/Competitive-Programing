//http://codeforces.com/contest/1465/problem/A
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
    int casos; cin>>casos;
    while(casos--){
        int n; cin>>n;
        int answer = 0, c = 0;
        deque<char>jaja(n);
        for(int i=0;i<jaja.size();i++)cin>>jaja[i];
        for(int i=n-1;i>=0;i--){
            if(jaja[i] != ')')break;
            answer++;
        }

        c = n-answer;
        //cout<<answer<<" "<<c<<endl;

        if(answer > c)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
    return 0;
}