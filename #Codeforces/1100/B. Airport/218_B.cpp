//http://codeforces.com/contest/218/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;


using namespace std;

int main()
{

    int pasajeros, aviones;
    cin>>pasajeros>>aviones;

    int save = pasajeros;


    deque<int>jaja(aviones);
    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
    }

    sort(jaja.begin(), jaja.end());

    int minimo = 0;
    for(int i=0;i<jaja.size();i++){
        for(int j=jaja[i];j>=1;j--){
            //cout<<"j "<<j<<endl;
            minimo = minimo + j;
            pasajeros--;
            if(pasajeros == 0)break;
        }
        if(pasajeros == 0)break;
    }

    if(aviones == 1)cout<<minimo<<" "<<minimo<<endl;
    else{

    pasajeros = save;
    //sort(jaja.rbegin(), jaja.rend());

    int maximo = 0, pointer = 0;
    while(true){
        sort(jaja.rbegin(), jaja.rend());
        if(jaja[pointer]!= 0){
            maximo = maximo + jaja[pointer];
            pasajeros--;
            jaja[pointer]--;
        }else if(jaja[pointer] == 0){
            pointer++;
        }

        if(pasajeros == 0)break;
    }


    cout<<maximo<<" "<<minimo<<endl;
    }

    return 0;
}