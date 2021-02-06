//http://codeforces.com/contest/298/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;

int main()
{
    int segundos, x,y,xx,yy;
    cin>>segundos>>x>>y>>xx>>yy;
    string cad; cin>>cad;

    int answer = 0; bool llegamos = false;
    for(int i=0;i<cad.size();i++){
        if(cad[i] == 'E'){
            if(x < xx)x++;
        }
        if(cad[i] == 'S'){
            if(y > yy)y--;
        }

        if(cad[i] == 'W'){
            if(x > xx)x--;
        }
        if(cad[i] == 'N'){
            if(y < yy)y++;
        }
        answer++;

        if(y == yy && x == xx){
            llegamos = true;
            break;
        }

    }
    if(llegamos == true)cout<<answer<<endl;
    else cout<<-1<<endl;
    //cout<<answer<<endl;
    return 0;
}