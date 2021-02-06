//http://codeforces.com/contest/1478/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define QuieroComer ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define debug(x) cout<<"--> "<<x<<endl
int const MOD = 10e9+7;

bool tiene (ll n, ll este){

    bool confirmo = false;
    while(true){
        ll current = n%10;
        if(current == este){confirmo = true; break;}
        n = n/10;
        if(n%10 < 1)break;
    }

    if(confirmo == true)return true;
    else return false;
}

int ultimo(ll n){
    int answer = n%10;
    return answer;
    
}

int main()
{
    QuieroComer

   int casos; cin>>casos;
   while(casos--){
       int n,d; cin>>n>>d;
       deque<int>jaja(n);
       deque<int>last;

       for(int i=1;i<=10;i++)last.push_back(ultimo(d*i));
       //for(int i=0;i<last.size();i++)cout<<last[i]<<" ";
       for(int i=0;i<jaja.size();i++){
           cin>>jaja[i];
           if(tiene(jaja[i],d)== true || jaja[i] >= d*10){cout<<"YES"<<endl; continue;}
           int lastOne = ultimo(jaja[i]);

           int pos; bool found = false;
           for(int j=0;j<last.size();j++){
               if(lastOne == last[j]){pos = j; found = true; break;}
           }
           //debug((pos+1)*7);
           if((pos+1)*d <= jaja[i] && found == true)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
   }
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