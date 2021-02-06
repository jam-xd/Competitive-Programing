//http://codeforces.com/contest/1451/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000010
#define MAXLL 1000000000000000010

ll max_div (ll n){
    int answer = 0;
    ll i;
    for(i=1;i*i<=n;i++){
        if(i == n/2+1)break;
        if(n%i == 0 && i!=1){
            answer = n/i;
            return answer;
        }
    }
    return answer;
   }

int main()
{/*
    int n; cin>>n;
  while(n--){
    int ggnomas; cin>>ggnomas;
    int answer = 0;
    if(ggnomas%2 != 0){ggnomas--; answer++;}
    while(true){
        int r = max_div(ggnomas);
        //cout<<r<<"::"<<endl;
        if(r == 0)break;
        else ggnomas = ggnomas / r;
        answer++;
    }
    answer = answer + (ggnomas-1);
    cout<<answer<<endl;

   }
   //cout<<max_div(n);
*/


int casos; cin>>casos;
while(casos--){
    int n, q; cin>>n>>q;
    deque<char>jaja(n);
    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
    }

    while(q--){
        bool existe = false;
        int l,r; cin>>l>>r;
        l--; r--;
        //cout<<"S :"<<jaja[l]<<" "<<jaja[r]<<endl;
        for(int i=0;i<=l-1;i++){
            //cout<<jaja[i]<<"_";
            if(jaja[i] == jaja[l])existe = true;
        }
        //cout<<endl;
        for(int i=r+1; i<n;i++){
            //cout<<jaja[i]<<"..";
            if(jaja[i] == jaja[r])existe = true;
        }//cout<<endl;
        if(existe == true)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        //cout<<"________________"<<endl;
    }
}

    return 0;
}