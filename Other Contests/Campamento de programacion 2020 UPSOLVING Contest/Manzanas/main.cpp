#include <bits/stdc++.h>

using namespace std;

int main()

//un array de tres estados, 1 = R =
{
    int n,k; cin>>n>>k;

    deque<pair<int,int> >jaja(n);
    bool visit[n+2] = {};
    deque<char>answer(n+2);

    for(int i=0;i<n;i++){
        cin>>jaja[i].first;
        jaja[i].second = i+1;
    }

    sort(jaja.rbegin(), jaja.rend());

    for(int i=0;i<jaja.size();i++){
        cout<<jaja[i].first<<" ["<<jaja[i].second<<"]"<<endl;
    }



*/




    return 0;
}
