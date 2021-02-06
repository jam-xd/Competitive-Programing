//http://codeforces.com/contest/276/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;

int main()
{
    string cad; cin>>cad;
    map<char,int>jaja;
    for(int i=0;i<cad.size();i++){
        jaja[cad[i]]++;
    }

    map<char,int>::iterator it;
    int impares = 0;
    deque<pair<char, int> >ggnomas;
    for(it = jaja.begin(); it != jaja.end();it++){
        if(it->second %2 != 0)impares++;
        //cout<<"Las repeticiones de ["<<it->first<<"] son - "<<it->second<<endl;
        //ggnomas.push_back(pair<char,int>(it->first, it->second));
    }

    /*for(int i=0;i<ggnomas.size();i++){
        cout<<ggnomas[i].first<<" "<<ggnomas[i].second<<endl;
    }*/
    impares--;
    if(impares %2 == 0 || impares == -1)cout<<"First"<<endl;
    else cout<<"Second"<<endl;
    return 0;
}
