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

int main()
{
    //FileOut;
    while(true){
        deque<int>jaja(3);
        set<int>thisOne;
        for(int i=0;i<jaja.size();i++){
            cin>>jaja[i];
            thisOne.insert(jaja[i]);
        }
        sort(jaja.begin(), jaja.end());

        if(jaja[2] == 0)return 0;

        if(thisOne.size() == 3){
            cout<<"1 1 2"<<endl;
            continue;
        }

        if(thisOne.size() == 1){
            if(jaja[0] == 13)cout<<"*"<<endl;
            else cout<<jaja[0]+1<<" "<<jaja[1]+1<<" "<<jaja[2]+1<<endl;
            continue;
        }

        if(thisOne.size() == 2){
            if(jaja[0] == jaja[1]){
                if(jaja[2] == 13)cout<<"1 "<<jaja[0]+1<<" "<<jaja[0]+1<<endl;
                else cout<<jaja[0]<<" "<<jaja[0]<<" "<<jaja[2]+1<<endl;
            }else{
                if(jaja[2] != 13){
                    if(jaja[0]+1 == jaja[1])cout<<jaja[1]<<" "<<jaja[1]<<" "<<jaja[0]+2<<endl;
                    else cout<<jaja[0]+1<<" "<<jaja[1]<<" "<<jaja[1]<<endl;
                }else{
                    if(jaja[0] == 12)cout<<"1 1 1"<<endl;
                    else cout<<jaja[0]+1<<" "<<jaja[1]<<" "<<jaja[1]<<endl;
                }

            }
        }


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
	
	//Animo, sales de gris :'v, haz upsolving cuando termine >:v
	//Despues comes :3
----------------------------------------------/
*/
