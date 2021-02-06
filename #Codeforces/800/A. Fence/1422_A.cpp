//http://codeforces.com/contest/1422/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int casos; cin>>casos;
    deque<int>jaja(3);
    while(casos--){
        for(int i=0;i<3;i++){
            cin>>jaja[i];
        }

        cout<<max(jaja[2], max(jaja[0],jaja[1]))<<endl;
    }
    return 0;
}