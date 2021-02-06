//http://codeforces.com/contest/492/problem/B
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
    int n,dist; cin>>n>>dist;
    deque<double>jaja(n);
    double diff = 0;

    for(int i=0;i<jaja.size();i++)cin>>jaja[i];
    sort(jaja.begin(), jaja.end());

    for(int i=1;i<jaja.size();i++)
        if(jaja[i] - jaja[i-1] > diff)diff = jaja[i] - jaja[i-1];

    diff = diff/2;
    if(jaja[0] != 0 && jaja[0] > diff/2)diff = jaja[0];
    if(jaja[n-1] != dist && dist-jaja[n-1] > diff) diff = dist - jaja[n-1];

    printf("%.9f", diff);
    cout<<endl;


    return 0;
}