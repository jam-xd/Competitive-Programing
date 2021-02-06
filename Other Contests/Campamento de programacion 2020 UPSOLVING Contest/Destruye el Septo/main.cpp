#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n,maximo; cin>>n>>maximo;

    set<int>jaja;
    deque<int>jojo;

    for(int i=1;i<n+1;i++){
        int ggnomas; cin>>ggnomas;
        jaja.insert(ggnomas);
    }

    set<int>::iterator it;
    for(it = jaja.begin(); it != jaja.end(); it++){
        jojo.push_back(*it);
    }

    ll maxdiff = 0;
    for(int i=1;i<jojo.size();i++){
        if(jojo[i] - jojo[i-1] > maxdiff)maxdiff = jojo[i] - jojo[i-1];
    }

    /*for(int i=0;i<jojo.size();i++)cout<<jojo[i]<<" ";
    cout<<endl;*/
    if(maxdiff/2 > jojo[0]-1
       && maxdiff/2 > maximo - jojo[jojo.size()-1])
        cout<<maxdiff/2<<endl;

    else cout<<max(jojo[0] - 1, maximo - jojo[jojo.size()-1])<<endl;

    /*if(maxdiff %2 == 0) cout<<maxdiff/2<<endl;
    else cout<<maxdiff/2 +1<<endl;*/
    return 0;
}
