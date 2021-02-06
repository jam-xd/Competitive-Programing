//http://codeforces.com/contest/1443/problem/B
#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;

using namespace std;

int main()
{

    int casos; cin>>casos;
    while(casos--){
        ll mina, activar;
        cin>>activar>>mina;
        string cad; cin>>cad;

        deque<ll>posiciones;
        int unos = 0;
        for(int i=0;i<cad.size();i++){
           if(cad[i] == '1'){
                unos++;
                posiciones.push_back(i);
           }
        }

        //cout<<init<<" "<<endt<<endl;
        if(unos >=1){

        ll answer = 0LL, grupos = 1LL;
       for(int i=0;i<posiciones.size()-1;i++){
            ll diff = posiciones[i+1] - posiciones[i];
            //cout<<diff<<"<-- diff"<<endl;
            if(diff > 1LL){
                ll ggnomas = (mina*(diff-1LL));
                if(ggnomas < activar){
                    answer = answer + ggnomas;
                }else{
                    //answer = answer + activar;
                    grupos++;
                }
            }
       }


        cout<<answer + grupos*activar<<endl;
        }else cout<<"0"<<endl;
    }




    return 0;
}