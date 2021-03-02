#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define uwu ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define deb(x) cout<<"--> "<<x<<endl
int const MOD = 10e9+7;

bool compare(string a, string b){
    for(int i=0;i<a.size();i++)if(a[i]>=65 && a[i] <= 90)a[i] += 32;
    for(int i=0;i<b.size();i++)if(b[i]>=65 && b[i] <= 90)b[i] += 32;

    return a < b;
}

int main()
{

    //FileOut;

    int n,m;
    while(cin>>n>>m){
        if(n == 0 && m == 0)break;
        char jaja[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>jaja[i][j];
            }
        }

        deque<string>ggnomas;
        for(int i=0;i<m;i++){
            string current = "";
            for(int j=0;j<n;j++){
                current += jaja[j][i];
            }
            ggnomas.push_back(current);
        }

        stable_sort(ggnomas.begin(), ggnomas.end(), compare);
        //for(int i=0;i<ggnomas.size();i++)cout<<ggnomas[i]<<" ";
        //cout<<endl;

        char save[n][m];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                save[j][i] = ggnomas[i][j];
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<save[i][j];
            }cout<<endl;
        }
        cout<<endl;
    }

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
	
	//weno....ns....
----------------------------------------------/
*/
