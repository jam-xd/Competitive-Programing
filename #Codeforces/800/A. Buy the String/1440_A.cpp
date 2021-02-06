//http://codeforces.com/contest/1440/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000010
#define MAXLL 1000000000000000010

int main()
{
   int casos; cin>>casos;
   while(casos--){
    int n,ceros, unos, cambiar;
    cin>>n>>ceros>>unos>>cambiar;
    string cad; cin>>cad;
    int answer = 0;

    int cnt0 = 0, cnt1 = 0;
    for(int i=0;i<cad.size();i++){
        if(cad[i] == '0')cnt0++;
        else cnt1++;
    }
    if((ceros+cambiar) < unos){
        answer = answer + (cambiar*cnt1) + (ceros * n);
    }else if((unos + cambiar) < ceros){
        answer = answer + (cambiar*cnt0) + (unos * n);
    }else answer = answer + (cnt0*ceros) + (cnt1*unos);
    cout<<answer<<endl;
    //cout<<cnt0<<" "<<cnt1<<endl;
   }

    return 0;
}