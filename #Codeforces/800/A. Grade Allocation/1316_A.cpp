//http://codeforces.com/contest/1316/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos;
    int f,r=0;   int efe,x=0;
    cin>>casos;
    bool yes = false;

    while(casos--){
        int examenes, maximo;
        cin>>examenes>>maximo;


        deque<int>jaja(examenes);
        for(int i=0;i<examenes;i++){
            cin>>jaja[i];
            x = x + jaja[i];
        }
        //x = x - jaja[0];

        if(x<maximo){cout<<x<<endl;}
        if(x>=maximo){cout<<maximo<<endl;}
        x  = 0;
        jaja.clear();



        }


    return 0;
}