//http://codeforces.com/contest/1454/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000010 // INT_MAX existe;
#define MAXLL 1000000000000000010

int main()
{
int casos; cin>>casos;
while(casos--){
    int n; cin>>n;
    if(n%2 == 0){
        for(int i=n;i>0;i--){
            cout<<i<<" ";
        }cout<<endl;
    }else{
        for(int i=2;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<1<<endl;
    }

}
    return 0;
}