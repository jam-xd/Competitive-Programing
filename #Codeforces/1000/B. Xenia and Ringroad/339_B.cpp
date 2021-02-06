//http://codeforces.com/contest/339/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int casas; cin>>casas;
    int tareas; cin>>tareas;

    ll answer = 0, op = 0, init = 1;
    deque<ll>jaja(tareas);
    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
        if(jaja[i] > init){
            answer = answer + (jaja[i] - init);
            init = jaja[i];
        }else if(jaja[i] < init){
            answer = answer + (casas-init)+jaja[i];
            init = jaja[i];
        }

    }

    cout<<answer<<endl;



    return 0;
}