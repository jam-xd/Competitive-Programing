//http://codeforces.com/contest/116/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int paradas;
    cin>>paradas;

    deque<int>pasajeros;
    int sum = 0;
    while(paradas--){
        int a,b;
        cin>>a>>b;

        sum -= a;
        sum += b;
        pasajeros.push_back(sum);

    }
    sort(pasajeros.rbegin(), pasajeros.rend());
    cout<<pasajeros[0]<<endl;
    return 0;
}