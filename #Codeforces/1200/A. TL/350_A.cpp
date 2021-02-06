//http://codeforces.com/contest/350/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000010
#define MAXLL 1000000000000000010

int main()
{
   int n,m; cin>>n>>m;
   deque<int>solutions(n), wrong(m);
   int minimo = MAXINT, maximo = 0;
   for(int i=0;i<solutions.size();i++){
        cin>>solutions[i];
        minimo = min(minimo,solutions[i]);
        maximo = max(maximo, solutions[i]);

   }
   int wrongmin = MAXINT;
   for(int i=0;i<wrong.size();i++){
    cin>>wrong[i];
    wrongmin = min(wrongmin, wrong[i]);
   }

   int answer = max(minimo*2, maximo);
   if(wrongmin <= answer)cout<<-1<<endl;
   else cout<<answer<<endl;


    return 0;
}