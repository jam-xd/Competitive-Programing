//http://codeforces.com/contest/1453/problem/A
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;


int main()
{
    int casos; cin>>casos;
    while(casos--){
        int n,m; cin>>n>>m;
        deque<int>jaja(n), ggnomas(m);
        for(int i=0;i<jaja.size();i++)cin>>jaja[i];
        for(int i=0;i<ggnomas.size();i++)cin>>ggnomas[i];

        int answer = 0;
        for(int i=0;i<jaja.size();i++){
            for(int j=0;j<ggnomas.size();j++){
                if(jaja[i] == ggnomas[j])answer++;
            }
        }
        cout<<answer<<endl;
    }
    return 0;
}