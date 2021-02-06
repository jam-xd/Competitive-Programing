//http://codeforces.com/contest/1457/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;

int main()
{
   int casos; cin>>casos;
   while(casos--){
    int n,m,r,c; cin>>n>>m>>r>>c;
    int answer = 0;

    //cout<<abs((1-r) + (m-c))<<endl;
    answer = (abs(1-r)+abs(1-c));
    answer = max(answer, (abs(n-r) + abs(1-c)));
    answer = max(answer, (abs(1-r) + abs(m-c)));
    answer = max(answer, (abs(n-r) + abs(m-c)));

    cout<<answer<<endl;
   }

    return 0;
}