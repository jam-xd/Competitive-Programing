//http://codeforces.com/contest/1323/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos;
    cin>>casos;

    while(casos--){
            bool parB=false, existe=false,existe2=false;
        int t,impares=0,par;
        cin>>t;
        deque<int>impar;
        deque<int>jaja(t);
        for(int i=0;i<jaja.size();i++){
            cin>>jaja[i];
            if(jaja[i] %2 != 0 and impares <= 2){
                impar.push_back(i+1);
                impares++;
                if(impares == 2)existe = true;

            }
            if(jaja[i] %2 == 0){
                par = i+1;
                parB = true;
                existe2 = true;
            }
        }
        if(parB == true and existe2 == true){
            cout<<"1"<<endl;
            cout<<par<<endl;
        }
        if(parB == false and existe == true){
            cout<<"2"<<endl;
            cout<<impar[0]<<" "<<impar[1]<<endl;
        }
        if(existe == false and existe2 == false){
            cout<<"-1"<<endl;
        }

    }
    return 0;
}