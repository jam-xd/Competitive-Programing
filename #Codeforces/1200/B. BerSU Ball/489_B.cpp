//http://codeforces.com/contest/489/problem/B
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
    
    QuieroComer // se me olvido esto :v
    int b; cin>>b;
    deque<int>boys(b);
    for(int i=0;i<boys.size();i++)cin>>boys[i];

    int g; cin>>g;
    deque<int>girls(g);
    for(int i=0;i<girls.size();i++)cin>>girls[i];

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());


    int bPointer = 0, gPointer = 0;
    int pairs = 0;
    while(true){
        if(bPointer == b||  gPointer == g)break;
        //cout<<boys[bPointer]<<" "<<girls[gPointer]<<"||"<<endl;
        int diff = max(girls[gPointer],boys[bPointer]) - min(girls[gPointer],boys[bPointer]);
        if(diff <= 1){
            pairs++;
            bPointer++;
            gPointer++;
        }else{
            if(boys[bPointer] > girls[gPointer])gPointer++;
            else bPointer++;
        }
    }

    cout<<pairs<<endl;

    return 0;
}