//http://codeforces.com/contest/304/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000010


int main()
{
   int n; cin>>n;
   int answer = 0;
   for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            //cout<<i*i + j*j<<endl;
            int c = sqrt(i*i + j*j);
            int r = i*i + j*j;
            if(c<=n && c*c == r)answer++;
            //if(i*i + j*j <= sqrt(n))answer++;
        }
   }
   cout<<answer<<endl;

    return 0;
}
