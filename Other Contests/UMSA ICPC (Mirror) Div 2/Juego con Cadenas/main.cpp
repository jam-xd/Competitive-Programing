#include <bits/stdc++.h>

using namespace std;

int main()
{
    string ggnomas; cin>>ggnomas;
    deque<char>cad(ggnomas.size());
    for(int i=0;i<ggnomas.size();i++)cad[i] = ggnomas[i];
    int cambios; cin>>cambios;


    bool reves = false;
    while(cambios--){
        int n; cin>>n;
        if(n == 1)reves = !reves;

        if(n == 2){
            int donde; cin>>donde;
            char c; cin>>c;

            if(reves == true && donde == 1) cad.push_back(c);
            else if(reves == true && donde == 2)cad.push_front(c);

            if(reves == false && donde == 1) cad.push_front(c);
            else if(reves == false && donde == 2) cad.push_back(c);

        }

        if(n == 3){
            int where; cin>>where;
            //char cc; cin>>cc;

            if(reves == true && where == 1 && cad.size()>=1) cad.pop_back();
            else if(reves == true && where == 2 && cad.size()>=1) cad.pop_front();

            if(reves == false && where == 1 && cad.size()>=1) cad.pop_front();
            else if(reves == false && where == 2 && cad.size()>=1) cad.pop_back();

        }
    }
///-----------------------------------------------------------------------IMPRIMIR
    if(reves == false){
        for(int i=0;i<cad.size();i++)cout<<cad[i];

    }else{
        for(int i=cad.size()-1;i>=0;i--)cout<<cad[i];
    }

    cout<<endl;


    return 0;
}
