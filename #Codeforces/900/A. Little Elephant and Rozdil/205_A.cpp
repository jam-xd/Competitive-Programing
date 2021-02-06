//http://codeforces.com/contest/205/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n; cin>>n;
    deque<int>jaja(n);

    long long minimo = 1000000010;
    int answer = 0;
    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
        if(jaja[i] < minimo){
            minimo = jaja[i];
            answer = i;
        }
    }
    int rep = 0;
    for(int i=0;i<jaja.size();i++){
        if(jaja[i] == minimo)rep ++;
    }


    if(rep >=2)cout<<"Still Rozdil"<<endl;
    else cout<<answer+1<<endl;

    return 0;
}