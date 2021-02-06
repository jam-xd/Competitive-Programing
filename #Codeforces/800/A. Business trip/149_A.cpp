//http://codeforces.com/contest/149/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    deque<int>jaja(12);
    for(int i=0;i<12;i++)cin>>jaja[i];

    sort(jaja.rbegin(), jaja.rend());
    int sum = 0, answer = 0;
    for(int i=0;i<jaja.size();i++){
        if(sum >= n)break;
        sum = sum + jaja[i];
        answer++;

    }


    if(sum >= n)cout<<answer<<endl;
    else cout<<"-1"<<endl;

    return 0;
}