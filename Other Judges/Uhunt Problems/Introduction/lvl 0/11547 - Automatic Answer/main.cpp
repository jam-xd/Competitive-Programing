#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int casos; cin>>casos;
    while(casos--){
        ll a; cin>>a;
        a = (((((a*567)/9)+7492)*235)/47)-498;
        stringstream ss;
        ss<<a;
        string cad;
        ss>>cad;

        cout<<cad[cad.size()-2]<<endl;
    }
    return 0;
}
