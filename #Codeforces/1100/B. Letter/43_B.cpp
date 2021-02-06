//http://codeforces.com/contest/43/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;

int main()
{
    string cad, cadd;
    getline(cin,cad);
    getline(cin,cadd);

    //cout<<cad<<endl;
    //cout<<cadd<<endl;

    map<char,int>jaja;
    map<char,int>jojo;
    deque<pair<char,int> >ggnomas;
    deque<pair<char,int> >gomitas;

    for(int i=0;i<cad.size();i++)if(cad[i] != ' ')jaja[cad[i]]++;
    for(int i=0;i<cadd.size();i++)if(cadd[i] != ' ')jojo[cadd[i]]++;


    map<char,int>::iterator it;
    for(it = jaja.begin(); it != jaja.end(); it++){
        ggnomas.push_back(pair<int,int>(it->first, it->second));
        //cout<<"repeticiones de: "<<it->first<<" es: "<<it->second<<endl;
    }

    map<char,int>::iterator itt;
    for(itt = jojo.begin(); itt != jojo.end(); itt++){
        gomitas.push_back(pair<int,int>(itt->first, itt->second));
        //cout<<"repeticiones de: "<<it->first<<" es: "<<it->second<<endl;
    }

   /*for(int i=0;i<ggnomas.size();i++){
    cout<<ggnomas[i].first<<" "<<ggnomas[i].second<<endl;
   }
    cout<<"_____"<<endl;
   for(int i=0;i<gomitas.size();i++){
    cout<<gomitas[i].first<<" "<<gomitas[i].second<<endl;
   }*/
    bool nel = false;
   for(int i=0;i<gomitas.size();i++){
        bool existe = false;
    for(int j=0;j<ggnomas.size();j++){
        if(gomitas[i].first == ggnomas[j].first){
            existe = true;
            if(ggnomas[j].second - gomitas[i].second >= 0)continue;
            else{
                nel = true;
                break;
            }
        }

    }
    if(existe == false)nel = true;
    if(nel == true)break;
   }
   if(nel == true)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;


    return 0;
}