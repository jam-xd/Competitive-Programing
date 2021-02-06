//http://codeforces.com/contest/1455/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;

int main()
{
    int casos; cin>>casos;
    while(casos--){
        int n; cin>>n;
        int init = 0, aum = 1, operaciones=0;

        while(init < n){
            init = init + aum;
            aum++;
            operaciones++;
        }

        if(init == n)cout<<operaciones<<endl;
        else{
        bool afirmo = false;
        for(int i=2;i<aum+1;i++){
            if(init - i == n){
                afirmo = true;
                break;
            }
        }

        if(afirmo == true)cout<<operaciones<<endl;
        else cout<<operaciones+1<<endl;
    }
    }

    return 0;
}