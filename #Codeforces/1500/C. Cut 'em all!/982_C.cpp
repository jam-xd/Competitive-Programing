#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define QuieroComer ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define deb(x) cout<<"--> "<<x<<endl
int const MOD = 10e9+7;
int const N = 10e5+5;

bool already[N] = {false};
int answer = 0;
deque<deque<int> >ggnomas;

int dfs(int u){
    already[u] = true;
    int current = 1;
    for(int i=0;i<ggnomas[u].size();i++){
        if(already[ggnomas[u][i]] == false){
            int k = dfs(ggnomas[u][i]);
           if(k%2 == 0)answer++;
           else current += k;
        }
    }
    return current;
}

int main()
{
    int n; cin>>n;
    ggnomas.resize(n+1);
    for(int i=0;i<n-1;i++){
        int u,v; cin>>u>>v;
        ggnomas[u].push_back(v);
        ggnomas[v].push_back(u);
    }

    if(n%2 != 0){
        cout<<-1<<endl;
        return 0;
    }
    int init = dfs(1);
    cout<<answer<<endl;
    return 0;
}


/*--------------------------------------------/
	* overflow?
	* Corner cases (n=1? || n=n-1?)
	* n=n+1 (!=) n+=1; 
	  (copy n) ~ (don't make a copy of n)
	* if(use vector, string, deque in function) use "&"before.
	  (to rewrite, instead of make a copy)
	* DON'T GET STUCK ON ONE APPROACH
    //weno...
----------------------------------------------/
*/
