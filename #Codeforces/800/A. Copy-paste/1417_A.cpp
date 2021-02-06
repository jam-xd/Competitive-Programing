//http://codeforces.com/contest/1417/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos;
    cin>>casos;

    while(casos--){
        int n,k,op=0;
        cin>>n>>k;

        deque<int>jaja(n);
        for(int i=0;i<n;i++)cin>>jaja[i];

        sort(jaja.begin(), jaja.end());

        for(int i=1;i<jaja.size();i++){
            while(jaja[i]+jaja[0] <= k){
                jaja[i] += jaja[0];
                op++;
            }
        }

        cout<<op<<endl;
    }
    return 0;
}