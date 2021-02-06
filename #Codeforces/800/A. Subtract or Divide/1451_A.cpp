//http://codeforces.com/contest/1451/problem/A
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
{
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



    return 0;
}