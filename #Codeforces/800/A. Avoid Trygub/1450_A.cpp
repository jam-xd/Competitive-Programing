//http://codeforces.com/contest/1450/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;

int main()
{
    int casos; cin>>casos;
    while(casos--){
        int tam; cin>>tam;
        deque<char>jaja(tam);
        for(int i=0;i<jaja.size();i++)cin>>jaja[i];

        sort(jaja.begin(), jaja.end());
        for(int i=0;i<jaja.size();i++){
            cout<<jaja[i];
        }cout<<endl;
    }

    return 0;
}