//http://codeforces.com/contest/1445/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double dbl;
typedef unsigned long long ull;


int main()
{
    int casos; cin>>casos;
    while(casos--){
        bool nel = false;
        int tam, n; cin>>tam>>n;
        deque<int>jaja(tam),jojo(tam);
        for(int i=0;i<tam;i++)cin>>jaja[i];
        for(int i=0;i<tam;i++)cin>>jojo[i];

        /*cout<<"jojo: "<<endl;
        for(int i=0;i<jojo.size();i++){
            cout<<jojo[i]<<" ";
        }*/

        sort(jaja.begin(), jaja.end());
        sort(jojo.rbegin(), jojo.rend());

        for(int i=0;i<tam;i++){
            if(jaja[i] + jojo[i] <= n)continue;
            else{
                nel = true;
                break;
            }
        }

    if(nel == true)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;

    }

    return 0;
}