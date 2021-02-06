//http://codeforces.com/contest/1445/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double dbl;
typedef unsigned long long ull;


int main()
{

    /*Problem B*/
    int casos; cin>>casos;
    while(casos--){
        int a,b,c,d; cin>>a>>b>>c>>d;
        int answer1 = max(a,d) + min(b,c);
        int answer2 = min(a,d) + max(b,c);

        cout<<max(answer1,answer2)<<endl;
    }
    
    return 0;
}