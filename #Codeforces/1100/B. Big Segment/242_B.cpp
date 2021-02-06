//http://codeforces.com/contest/242/problem/B
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    deque<pair<int,int> >jaja(n);
    int minimo=1000000010, maximo=0;
    for(int i=0;i<n;i++){
        cin>>jaja[i].first>>jaja[i].second;
        minimo = min(minimo,jaja[i].first);
        maximo = max(maximo, jaja[i].second);
    }

    bool existe = false; int pos;
    for(int i=0;i<jaja.size();i++){
        if(jaja[i].first == minimo && jaja[i].second == maximo){
            existe = true;
            pos = i+1;
            break;
        }
    }

    if(existe == false)cout<<-1<<endl;
    else cout<<pos<<endl;
    return 0;
}