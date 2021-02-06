//http://codeforces.com/contest/1433/problem/C
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int casos; cin>>casos;
    while(casos--){
        int tam; cin>>tam;
        deque<int>jaja(tam);
        long long maximo=0, pos, minimo = 100000000000;

        int d=0,dd=1000000010;
        for(int i=0;i<jaja.size();i++){
                cin>>jaja[i];
                d = max(d,jaja[i]);
                dd = min(dd,jaja[i]);

        }

        for(int i=0;i<jaja.size();i++){
            if(i != 0 && i!= jaja.size()-1){
                if(maximo < jaja[i] && (jaja[i] > jaja[i-1] || jaja[i] > jaja[i+1])){
                    maximo = jaja[i];
                    pos = i;
                }
            }else{
                if(i == 0 && maximo < jaja[i]
                   && jaja[i] > jaja[i+1]){
                    maximo = jaja[i];
                    pos = i;
                }

                if(i == jaja.size()-1 && maximo < jaja[i]
                     && jaja[i] > jaja[i-1]){
                    maximo = jaja[i];
                    pos = i;
                }
            }
        }
        if(d == dd)cout<<"-1"<<endl;
        else cout<<pos+1<<endl;
    }



    return 0;
}

