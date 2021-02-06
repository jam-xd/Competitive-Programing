//http://codeforces.com/contest/574/problem/A
#include <bits/stdc++.h>

using namespace std;

int maxNumero(deque<int>v){
    int este = 0;
    for(int i=0;i<v.size();i++){
        if(v[i] >= este)este = v[i];
    }

    return este;
}

int main()
{
    int n, dulces = 0, eloso = 0;
    cin>>n>>eloso;

    deque<int>jaja(n-1);

    for(int i=0;i<jaja.size();i++)cin>>jaja[i];
    
    /*sort(jaja.rbegin(), jaja.rend());
    int maxnum = jaja[0]*/

    while(eloso <= maxNumero(jaja)){
        sort(jaja.rbegin(), jaja.rend());
        jaja[0]--;
        dulces++;
        eloso++;
        //sort(jaja.rbegin(), jaja.rend());
        //maxnum = jaja[0];

    }

    cout<<dulces<<endl;



    return 0;
}