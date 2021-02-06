//http://codeforces.com/contest/459/problem/B
#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;


int main()
{
    int n; cin>>n;
    deque<int>jaja(n);
    for(int i=0;i<jaja.size();i++)cin>>jaja[i];
    sort(jaja.begin(), jaja.end());

    int a = jaja[0], b = jaja[jaja.size()-1];
    //cout<<a<<" "<<b<<endl;
    ll acont = 0LL, bcont = 0LL;
    for(int i=0;i<jaja.size();i++){
        if(jaja[i] == a)acont++;
        else break;
    }

    for(int i=jaja.size()-1;i>=0;i--){
        if(jaja[i] == b)bcont++;
        else break;
    }

    //cout<<acont<<" "<<bcont<<endl;
    ll maxdiff = b-a;
    ll answer = max(acont,bcont)*min(acont,bcont);

    if(a!=b)cout<<maxdiff<<" "<<answer<<endl;
    else{
        ll ggnomas = ((acont-1LL)*(acont)/2);
        cout<<"0 "<<ggnomas<<endl;
    }





    return 0;
}