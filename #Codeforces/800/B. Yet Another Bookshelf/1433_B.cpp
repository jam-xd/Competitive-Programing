//http://codeforces.com/contest/1433/problem/B
#include <bits/stdc++.h>

using namespace std;

int main()
{

int casos;
cin>>casos;
while(casos--){
    int tam; cin>>tam;
    deque<int>jaja(tam);
    int unos = 0;
    for(int i=0;i<jaja.size();i++){
            cin>>jaja[i];
            if(jaja[i] == 1)unos++;
    }

    if(unos > 1){
        int init, endt;
        for(int i=0;i<jaja.size();i++){
            if(jaja[i] == 1){
                init = i;
                break;
            }
        }

        for(int i=jaja.size()-1;i>=0;i--){
            if(jaja[i] == 1){
                endt = i;
                break;
            }
        }

        int op = 0;
        for(int i=init;i<=endt;i++)if(jaja[i] == 0)op++;

        cout<<op<<endl;
    }else cout<<"0"<<endl;


}

    return 0;
}