//http://codeforces.com/contest/1462/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;

int const N = 1005;
int const MOD = 10e9+7;

int main()
{
    int casos; cin>>casos;
    while(casos--){
        int n; cin>>n;
        deque<int>jaja(n);
        for(int i=0;i<jaja.size();i++){
            cin>>jaja[i];
        }

        int low = 0, high = jaja.size()-1;
        while(low < high){
            cout<<jaja[low]<<" "<<jaja[high]<<" ";
            low++;
            high--;
        }
        if(jaja.size()%2 != 0)cout<<jaja[low];
        cout<<endl;
    }


    return 0;
}