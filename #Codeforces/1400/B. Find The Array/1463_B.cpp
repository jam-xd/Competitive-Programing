//http://codeforces.com/contest/1463/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;

int const MOD = 10e9+7;

int main()
{

    int casos; cin>>casos;
    while(casos--){
        int n; cin>>n;
        deque<ll>jaja(n);
        deque<ll>v1,v2;
        for(int i=0;i<jaja.size();i++)cin>>jaja[i];

        bool turn = true;
        ll sum1 = 0, sum2 = 0;

        for(int i=0;i<jaja.size();i++){
            if(turn == false){
                //cout<<jaja[i]<<" ";
                v1.push_back(jaja[i]);
            }
            else{
                //cout<<1<<" ";
                sum1 = sum1 + jaja[i]-1;
                v1.push_back(1);
            }
            turn = !turn;
        }

        /*----------------------*/

        turn = false;
        for(int i=0;i<jaja.size();i++){
            if(turn == false){
                //cout<<jaja[i]<<" ";
                v2.push_back(jaja[i]);
            }
            else{
                //cout<<1<<" ";
                sum2 = sum2 + jaja[i]-1;
                v2.push_back(1);
            }
            turn = !turn;
        }
        /*--------------------------*/




       if(sum1 <= sum2){
        for(int i=0;i<v1.size();i++)cout<<v1[i]<<" ";
        cout<<endl;
       }else{
        for(int i=0;i<v2.size();i++)cout<<v2[i]<<" ";
        cout<<endl;
       }


    }


    return 0;
}