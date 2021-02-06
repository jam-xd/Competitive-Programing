//http://codeforces.com/contest/1440/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000010
#define MAXLL 1000000000000000010

int main()
{

   int casos; cin>>casos;
   while(casos--){
    ll n,k; cin>>n>>k;
    deque<ll>jaja(n*k);
    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
    }


    ll pointer = (n*k), answer = 0, cnt = 0;
    while(true){
        pointer = pointer-(1LL+(n/2LL));
        //cout<<"CURRENT POINTER :"<<jaja[pointer]<<endl;
        answer = answer + (jaja[pointer]);
        //cout<<jaja[pointer]<<"__"<<endl;
        cnt++;
        if(cnt == k)break;
    }
    cout<<answer<<endl;
   }




    return 0;
}