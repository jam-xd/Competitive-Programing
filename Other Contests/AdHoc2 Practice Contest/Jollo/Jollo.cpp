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


bool playRound(int tryValue, deque<int>she, deque<int>he){
    he.push_back(tryValue);
    sort(she.rbegin(), she.rend());
    sort(he.rbegin(), he.rend());

    int hepoints, shepoints;
    hepoints = shepoints = 0;
    //cout<<"____________________"<<endl;
    while(she.size() != 0){
        /*cout<<"SHE: ";
        for(int i=0;i<she.size();i++)cout<<she[i]<<" "; cout<<endl;
        cout<<"HE: ";
        for(int i=0;i<he.size();i++)cout<<he[i]<<" "; cout<<endl;*/
        if(he[0] > she[0]){
            hepoints++;
            she.pop_back();
            he.pop_front();
        }else if(he[0] < she[0]){
            int position;
            for(int i=0;i<she.size();i++){
                if(she[i] > he[0]) position = i;
                else break;
            }
            //deb(she[position]);
            swap(she[0], she[position]);
            she.pop_front();
            he.pop_front();
            shepoints++;
        }else{she.pop_front(); he.pop_front();}
    }

    /*cout<<"M "<<hepoints<<endl;
    cout<<"S "<<shepoints<<endl;
    cout<<"____________________"<<endl;*/
    if(shepoints >= 2)return false;
    if(hepoints >= 2)return true;
    if(shepoints < 2 && hepoints <2)return false;
}

int main()
{
    //FileOut;

    while(true){
        deque<int>she(3);
        deque<int>he(2);

        cin>>she[0]>>she[1]>>she[2];
        cin>>he[0]>>he[1];

        if(she[0] == 0 && she[1] == 0 && she[2] == 0 && he[0] == 0 && he[1] == 0)return 0;

        bool afirmo = false; int save;
        for(int i=1;i<=52;i++){
            if(i != he[0] && i!= he[1] && i != she[0] && i!=she[1] && i!= she[2])
            if(playRound(i,she,he) == true){afirmo = true; save = i; break;}
        }

        if(afirmo == true)cout<<save<<endl;
        else cout<<-1<<endl;
        
    }
    return 0;
}


/*--------------------------------------------/
	* overflow?
	* Corner cases (n=1? || n=n-1?)
	* n=n+1 (!=) n+=1; 
	  (copy n) ~ (don't make a copy of n)
	* if(use vector, string, deque in 8function) use "&"before.
	  (to rewrite, instead of make a copy)
	* DON'T GET STUCK ON ONE APPROACH
	
	//Animo, sales de gris :'v, haz upsolving cuando termine >:v
	//Despues comes :3
----------------------------------------------/
*/
