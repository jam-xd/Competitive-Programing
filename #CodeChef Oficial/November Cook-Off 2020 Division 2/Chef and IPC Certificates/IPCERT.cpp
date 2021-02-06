#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000010
#define MAXLL 1000000000000000010

int main()
{
   int n,m,k; cin>>n>>m>>k;
   int casos = n;
   int sum = 0, answer = 0;
   while(casos--){
    for(int i=0;i<n;i++){
        int jaja; cin>>jaja;
        sum = sum + jaja;
    }
    int q; cin>>q;
    if(sum >= m && q <= 10)answer++;
    sum = 0;
   }
   cout<<answer<<endl;

    return 0;
}
