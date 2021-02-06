//http://codeforces.com/contest/1462/problem/B
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
        deque<char>jaja(n);
        for(int i=0;i<jaja.size();i++){
            cin>>jaja[i];
        }

        bool yes = false;
        bool found = false;


        if(jaja[n-4] == '2' && jaja[n-3] == '0'
           && jaja[n-2] == '2' && jaja[n-1] == '0')yes = true;

        if(jaja[0] == '2' && jaja[1] == '0'
           && jaja[2] == '2' && jaja[3] == '0')yes = true;
        /*-------------------------------------------------*/

        if(jaja[0] == '2' && jaja[1] == '0'
           && jaja[2] == '2' && jaja[n-1] == '0')yes = true;

        /*-------------------------------------------------*/
        if(jaja[0] == '2' && jaja[1] == '0'
           && jaja[n-2] == '2' && jaja[n-1] == '0')yes = true;
        /*---------------------------------------------------*/
        if(jaja[0] == '2' && jaja[n-3] == '0'
           && jaja[n-2] == '2' && jaja[n-1] == '0')yes = true;

        if(yes == true)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}