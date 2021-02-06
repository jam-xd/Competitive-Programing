//http://codeforces.com/contest/363/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;

int main()
{

    int n,k; cin>>n>>k;
    deque<int>jaja(n);
    deque<int>acc(n);
    acc[0] = 0;

    int minxd = 1000000010, pos;
    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
        if(jaja[i] < minxd){
            minxd = jaja[i];
            pos = i+1;
        }
        acc[i+1] = jaja[i] + acc[i];
    }

    //for(int i=0;i<acc.size();i++)cout<<acc[i]<<" ";
    //cout<<endl;
    if(k == 1)cout<<pos<<endl;
    else{
    int low_pointer = 0, high_pointer = k;
    int minimo = 1000000010;
    int save=1;
    while(true){
        if(acc[high_pointer] - acc[low_pointer] < minimo){
            minimo = acc[high_pointer] - acc[low_pointer];
            save = low_pointer;
            //cout<<acc[high_pointer]<<" "<<acc[low_pointer]<<endl;
        }
        if(high_pointer == n)break;
        low_pointer++;
        high_pointer++;
    }

    cout<<save+1<<endl;
    }
    return 0;
}