//http://codeforces.com/contest/471/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    deque<int>jaja(6);
    deque<int>restantes;
    bool ggnomas[6] = {};
    bool haypiernas = false;

    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
    }
    sort(jaja.begin(), jaja.end());


    for(int i=0;i<=2;i++){
        if(jaja[i] == jaja[i+1] && jaja[i+1] == jaja[i+2]
           && jaja[i+2] == jaja[i+3]){
            ggnomas[i] = true;
            ggnomas[i+1] = true;
            ggnomas[i+2] = true;
            ggnomas[i+3] = true;
            haypiernas = true;
            break;
        }
    }

    if(haypiernas == true){

    for(int i=0;i<6;i++){
        if(ggnomas[i] != true){
            restantes.push_back(jaja[i]);
        }
    }

    //cout<<restantes[0]<<" "<<restantes[1]<<endl;

    if(restantes[0] == restantes[1])cout<<"Elephant"<<endl;
    if(restantes[1] != restantes[0])cout<<"Bear"<<endl;

    }else{
        cout<<"Alien"<<endl;
    }

    return 0;
}