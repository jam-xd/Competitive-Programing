#include <bits/stdc++.h>

using namespace std;


string jaja (string cad){

    while(true){
            int sum=0, xd=0;
        if(cad.size() == 1)return cad;
        for(int i=0;i<cad.size();i++){
            stringstream ss;
            ss<<cad[i];
            ss>>xd;

            sum = sum + xd;
        }
        stringstream gg;
        gg<<sum;
        gg>>cad;
    }

   // return sum ;
}

int main()
{

    string cad;
    while(cin>>cad){
            if(cad == "0")break;
        cout<<jaja(cad)<<endl;
    }
    return 0;
}
